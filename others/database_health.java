public class MyClass {
    private Map<String, DataSource> dbhealth;
    private MeterRegistry meterRegistry;

    public MyClass(Map<String, DataSource> dbhealth, MeterRegistry meterRegistry) {
        this.dbhealth = dbhealth;
        this.meterRegistry = meterRegistry;
    }

    public void registerConnectionHealthMetrics() {
        for (Map.Entry<String, DataSource> dataSourceEntry : dbhealth.entrySet()) {
            DataSource dataSource = dataSourceEntry.getValue();
            Gauge.builder("db_connection_health_" + dataSourceEntry.getKey(), this, 
                obj -> obj.isDataSourceConnected(dataSource) ? 1 : 0)
                .register(meterRegistry);
        }
    }

    private boolean isDataSourceConnected(DataSource dataSource) {
        try (Connection connection = dataSource.getConnection()) {
            return connection.isValid(timeout);
        } catch (SQLException e) {
            return false;
        }
    }

    public static void main(String[] args) {
        Map<String, DataSource> dbhealth = // Initialize map here
        MeterRegistry meterRegistry = // Initialize MeterRegistry here

        MyClass MyClass = new MyClass(dbhealth, meterRegistry);
        MyClass.registerConnectionHealthMetrics();
    }
}
