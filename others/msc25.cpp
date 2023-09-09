Garbage:
	post: /api/garbage
		{
			title:
		}

	get: /api/garbage
		response:
		[
			{
				id:
				title:
			},
			{
				id:
				title:
			}
		]

	put: /api/garbage/<garbageId>
		{
			title:
		}

	delete: /api/garbage/<garbageId>

WhatGarbage:
	post: /api/whatgarbage
		{
			title:
			img: multipartFile
			description:
			garbage: {
				id:
			}
		}

	//get: /api/whatgarbage/<garbageTitle>/

	get: /api/whatgarbage
			 /api/whatgarbage?garbage=<garbageTitle>&whatgarbage=<whatgarbageTitle>
			 /api/whatgarbage?searach=<type something to search in both garbage and WhatGarbage>
			 response:
			 [
			 		{
			 			id:
			 			title:
			 			img: url
			 			description:
			 			garbage: {
			 				id:
			 				title:
			 			}
			 		},
			 		{
			 			id:
			 			title:
			 			img: url
			 			description:
			 			garbage: {
			 				id:
			 				title:
			 			}
			 		}
			 ]

WhatGarbagePicture:
	post: /api/whatgarbage/picture
		{
			img: multipartFile
			garbage: {
				id:
			}
		}

	get: /api/whatgarbage/<whatgarbageId>picture
	response:
	[
		{
			id:
			img: url
		},
		{
			id:
			img: url
		}
	]
