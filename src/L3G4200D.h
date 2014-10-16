#ifndef __L3G4200D_H__
#define __L3G4200D_H__

// register mapping

#define	I2C_ADDR_L3G		0xD2

#define	L3G_WHO_AM_I		0x0F
#define	L3G_CTRL_REG1		0x20
#define	L3G_CTRL_REG2		0x21
#define	L3G_CTRL_REG3		0x22
#define	L3G_CTRL_REG4		0x23
#define	L3G_CTRL_REG5		0x24
#define	L3G_REFERENCE		0x25
#define	L3G_OUT_TEMP		0x26
#define	L3G_STATUS_REG		0x27
#define	L3G_OUT_X_L			0x28
#define	L3G_OUT_X_H			0x29
#define	L3G_OUT_Y_L			0x2A
#define	L3G_OUT_Y_H			0x2B
#define	L3G_OUT_Z_L			0x2C
#define	L3G_OUT_Z_H			0x2D
#define	L3G_FIFO_CTRL_REG	0x2E
#define	L3G_FIFO_SRC_REG	0x2F
#define	L3G_INT1_CFG		0x30
#define	L3G_INT1_SRC		0x31
#define	L3G_INT1_TSH_XH		0x32
#define	L3G_INT1_TSH_XL		0x33
#define	L3G_INT1_TSH_YH		0x34
#define	L3G_INT1_TSH_YL		0x35
#define	L3G_INT1_TSH_ZH		0x36
#define	L3G_INT1_TSH_ZL		0x37
#define	L3G_INT1_DURATION	0x38

#define L3G_XDA		0x01
#define L3G_YDA		0x02
#define L3G_ZDA		0x04
#define L3G_XYZDA	0x08
#define L3G_XOR		0x10
#define L3G_YOR		0x20
#define L3G_ZOR		0x40
#define L3G_XYZOR	0x80


#endif // __L3G4200D_H__

