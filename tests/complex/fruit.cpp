#include <fruit/fruit.h>

struct x00 { INJECT(x00()) { } };
struct x01 { INJECT(x01(x00)) { } };
struct x02 { INJECT(x02(x00, x01)) { } };
struct x03 { INJECT(x03(x00, x01, x02)) { } };
struct x04 { INJECT(x04(x00, x01, x02, x03)) { } };
struct x05 { INJECT(x05(x00, x01, x02, x03, x04)) { } };
struct x06 { INJECT(x06(x00, x01, x02, x03, x04, x05)) { } };
struct x07 { INJECT(x07(x00, x01, x02, x03, x04, x05, x06)) { } };
struct x08 { INJECT(x08(x00, x01, x02, x03, x04, x05, x06, x07)) { } };
struct x09 { INJECT(x09(x00, x01, x02, x03, x04, x05, x06, x07, x08)) { } };
struct x10 { INJECT(x10(x00, x01, x02, x03, x04, x05, x06, x07, x08, x09)) { } };
struct x11 { INJECT(x11(x01, x02, x03, x04, x05, x06, x07, x08, x09, x10)) { } };
struct x12 { INJECT(x12(x02, x03, x04, x05, x06, x07, x08, x09, x10, x11)) { } };
struct x13 { INJECT(x13(x03, x04, x05, x06, x07, x08, x09, x10, x11, x12)) { } };
struct x14 { INJECT(x14(x04, x05, x06, x07, x08, x09, x10, x11, x12, x13)) { } };
struct x15 { INJECT(x15(x05, x06, x07, x08, x09, x10, x11, x12, x13, x14)) { } };
struct x16 { INJECT(x16(x06, x07, x08, x09, x10, x11, x12, x13, x14, x15)) { } };
struct x17 { INJECT(x17(x07, x08, x09, x10, x11, x12, x13, x14, x15, x16)) { } };
struct x18 { INJECT(x18(x08, x09, x10, x11, x12, x13, x14, x15, x16, x17)) { } };
struct x19 { INJECT(x19(x09, x10, x11, x12, x13, x14, x15, x16, x17, x18)) { } };
struct x20 { INJECT(x20(x10, x11, x12, x13, x14, x15, x16, x17, x18, x19)) { } };
struct x21 { INJECT(x21(x11, x12, x13, x14, x15, x16, x17, x18, x19, x20)) { } };
struct x22 { INJECT(x22(x12, x13, x14, x15, x16, x17, x18, x19, x20, x21)) { } };
struct x23 { INJECT(x23(x13, x14, x15, x16, x17, x18, x19, x20, x21, x22)) { } };
struct x24 { INJECT(x24(x14, x15, x16, x17, x18, x19, x20, x21, x22, x23)) { } };
struct x25 { INJECT(x25(x15, x16, x17, x18, x19, x20, x21, x22, x23, x24)) { } };
struct x26 { INJECT(x26(x16, x17, x18, x19, x20, x21, x22, x23, x24, x25)) { } };
struct x27 { INJECT(x27(x17, x18, x19, x20, x21, x22, x23, x24, x25, x26)) { } };
struct x28 { INJECT(x28(x18, x19, x20, x21, x22, x23, x24, x25, x26, x27)) { } };
struct x29 { INJECT(x29(x19, x20, x21, x22, x23, x24, x25, x26, x27, x28)) { } };
struct x30 { INJECT(x30(x20, x21, x22, x23, x24, x25, x26, x27, x28, x29)) { } };
struct x31 { INJECT(x31(x21, x22, x23, x24, x25, x26, x27, x28, x29, x30)) { } };
struct x32 { INJECT(x32(x22, x23, x24, x25, x26, x27, x28, x29, x30, x31)) { } };
struct x33 { INJECT(x33(x23, x24, x25, x26, x27, x28, x29, x30, x31, x32)) { } };
struct x34 { INJECT(x34(x24, x25, x26, x27, x28, x29, x30, x31, x32, x33)) { } };
struct x35 { INJECT(x35(x25, x26, x27, x28, x29, x30, x31, x32, x33, x34)) { } };
struct x36 { INJECT(x36(x26, x27, x28, x29, x30, x31, x32, x33, x34, x35)) { } };
struct x37 { INJECT(x37(x27, x28, x29, x30, x31, x32, x33, x34, x35, x36)) { } };
struct x38 { INJECT(x38(x28, x29, x30, x31, x32, x33, x34, x35, x36, x37)) { } };
struct x39 { INJECT(x39(x29, x30, x31, x32, x33, x34, x35, x36, x37, x38)) { } };
struct x40 { INJECT(x40(x30, x31, x32, x33, x34, x35, x36, x37, x38, x39)) { } };
struct x41 { INJECT(x41(x31, x32, x33, x34, x35, x36, x37, x38, x39, x40)) { } };
struct x42 { INJECT(x42(x32, x33, x34, x35, x36, x37, x38, x39, x40, x41)) { } };
struct x43 { INJECT(x43(x33, x34, x35, x36, x37, x38, x39, x40, x41, x42)) { } };
struct x44 { INJECT(x44(x34, x35, x36, x37, x38, x39, x40, x41, x42, x43)) { } };
struct x45 { INJECT(x45(x35, x36, x37, x38, x39, x40, x41, x42, x43, x44)) { } };
struct x46 { INJECT(x46(x36, x37, x38, x39, x40, x41, x42, x43, x44, x45)) { } };
struct x47 { INJECT(x47(x37, x38, x39, x40, x41, x42, x43, x44, x45, x46)) { } };
struct x48 { INJECT(x48(x38, x39, x40, x41, x42, x43, x44, x45, x46, x47)) { } };
struct x49 { INJECT(x49(x39, x40, x41, x42, x43, x44, x45, x46, x47, x48)) { } };
struct x50 { INJECT(x50(x40, x41, x42, x43, x44, x45, x46, x47, x48, x49)) { } };
struct x51 { INJECT(x51(x41, x42, x43, x44, x45, x46, x47, x48, x49, x50)) { } };
struct x52 { INJECT(x52(x42, x43, x44, x45, x46, x47, x48, x49, x50, x51)) { } };
struct x53 { INJECT(x53(x43, x44, x45, x46, x47, x48, x49, x50, x51, x52)) { } };
struct x54 { INJECT(x54(x44, x45, x46, x47, x48, x49, x50, x51, x52, x53)) { } };
struct x55 { INJECT(x55(x45, x46, x47, x48, x49, x50, x51, x52, x53, x54)) { } };
struct x56 { INJECT(x56(x46, x47, x48, x49, x50, x51, x52, x53, x54, x55)) { } };
struct x57 { INJECT(x57(x47, x48, x49, x50, x51, x52, x53, x54, x55, x56)) { } };
struct x58 { INJECT(x58(x48, x49, x50, x51, x52, x53, x54, x55, x56, x57)) { } };
struct x59 { INJECT(x59(x49, x50, x51, x52, x53, x54, x55, x56, x57, x58)) { } };
struct x60 { INJECT(x60(x50, x51, x52, x53, x54, x55, x56, x57, x58, x59)) { } };
struct x61 { INJECT(x61(x51, x52, x53, x54, x55, x56, x57, x58, x59, x60)) { } };
struct x62 { INJECT(x62(x52, x53, x54, x55, x56, x57, x58, x59, x60, x61)) { } };
struct x63 { INJECT(x63(x53, x54, x55, x56, x57, x58, x59, x60, x61, x62)) { } };
struct x64 { INJECT(x64(x54, x55, x56, x57, x58, x59, x60, x61, x62, x63)) { } };
struct x65 { INJECT(x65(x55, x56, x57, x58, x59, x60, x61, x62, x63, x64)) { } };
struct x66 { INJECT(x66(x56, x57, x58, x59, x60, x61, x62, x63, x64, x65)) { } };
struct x67 { INJECT(x67(x57, x58, x59, x60, x61, x62, x63, x64, x65, x66)) { } };
struct x68 { INJECT(x68(x58, x59, x60, x61, x62, x63, x64, x65, x66, x67)) { } };
struct x69 { INJECT(x69(x59, x60, x61, x62, x63, x64, x65, x66, x67, x68)) { } };
struct x70 { INJECT(x70(x60, x61, x62, x63, x64, x65, x66, x67, x68, x69)) { } };
struct x71 { INJECT(x71(x61, x62, x63, x64, x65, x66, x67, x68, x69, x70)) { } };
struct x72 { INJECT(x72(x62, x63, x64, x65, x66, x67, x68, x69, x70, x71)) { } };
struct x73 { INJECT(x73(x63, x64, x65, x66, x67, x68, x69, x70, x71, x72)) { } };
struct x74 { INJECT(x74(x64, x65, x66, x67, x68, x69, x70, x71, x72, x73)) { } };
struct x75 { INJECT(x75(x65, x66, x67, x68, x69, x70, x71, x72, x73, x74)) { } };
struct x76 { INJECT(x76(x66, x67, x68, x69, x70, x71, x72, x73, x74, x75)) { } };
struct x77 { INJECT(x77(x67, x68, x69, x70, x71, x72, x73, x74, x75, x76)) { } };
struct x78 { INJECT(x78(x68, x69, x70, x71, x72, x73, x74, x75, x76, x77)) { } };
struct x79 { INJECT(x79(x69, x70, x71, x72, x73, x74, x75, x76, x77, x78)) { } };
struct x80 { INJECT(x80(x70, x71, x72, x73, x74, x75, x76, x77, x78, x79)) { } };
struct x81 { INJECT(x81(x71, x72, x73, x74, x75, x76, x77, x78, x79, x80)) { } };
struct x82 { INJECT(x82(x72, x73, x74, x75, x76, x77, x78, x79, x80, x81)) { } };
struct x83 { INJECT(x83(x73, x74, x75, x76, x77, x78, x79, x80, x81, x82)) { } };
struct x84 { INJECT(x84(x74, x75, x76, x77, x78, x79, x80, x81, x82, x83)) { } };
struct x85 { INJECT(x85(x75, x76, x77, x78, x79, x80, x81, x82, x83, x84)) { } };
struct x86 { INJECT(x86(x76, x77, x78, x79, x80, x81, x82, x83, x84, x85)) { } };
struct x87 { INJECT(x87(x77, x78, x79, x80, x81, x82, x83, x84, x85, x86)) { } };
struct x88 { INJECT(x88(x78, x79, x80, x81, x82, x83, x84, x85, x86, x87)) { } };
struct x89 { INJECT(x89(x79, x80, x81, x82, x83, x84, x85, x86, x87, x88)) { } };
struct x90 { INJECT(x90(x80, x81, x82, x83, x84, x85, x86, x87, x88, x89)) { } };
struct x91 { INJECT(x91(x81, x82, x83, x84, x85, x86, x87, x88, x89, x90)) { } };
struct x92 { INJECT(x92(x82, x83, x84, x85, x86, x87, x88, x89, x90, x91)) { } };
struct x93 { INJECT(x93(x83, x84, x85, x86, x87, x88, x89, x90, x91, x92)) { } };
struct x94 { INJECT(x94(x84, x85, x86, x87, x88, x89, x90, x91, x92, x93)) { } };
struct x95 { INJECT(x95(x85, x86, x87, x88, x89, x90, x91, x92, x93, x94)) { } };
struct x96 { INJECT(x96(x86, x87, x88, x89, x90, x91, x92, x93, x94, x95)) { } };
struct x97 { INJECT(x97(x87, x88, x89, x90, x91, x92, x93, x94, x95, x96)) { } };
struct x98 { INJECT(x98(x88, x89, x90, x91, x92, x93, x94, x95, x96, x97)) { } };
struct x99 { INJECT(x99(x89, x90, x91, x92, x93, x94, x95, x96, x97, x98)) { } };

struct i00 { virtual ~i00() noexcept = default; virtual void dummy() = 0; }; struct impl00 : i00 { INJECT(impl00(x00, x01, x02, x03, x04, x05, x06, x07, x08, x09)) { } void dummy() override { } };
struct i01 { virtual ~i01() noexcept = default; virtual void dummy() = 0; }; struct impl01 : i01 { INJECT(impl01(x01, x02, x03, x04, x05, x06, x07, x08, x09, x10)) { } void dummy() override { } };
struct i02 { virtual ~i02() noexcept = default; virtual void dummy() = 0; }; struct impl02 : i02 { INJECT(impl02(x02, x03, x04, x05, x06, x07, x08, x09, x10, x11)) { } void dummy() override { } };
struct i03 { virtual ~i03() noexcept = default; virtual void dummy() = 0; }; struct impl03 : i03 { INJECT(impl03(x03, x04, x05, x06, x07, x08, x09, x10, x11, x12)) { } void dummy() override { } };
struct i04 { virtual ~i04() noexcept = default; virtual void dummy() = 0; }; struct impl04 : i04 { INJECT(impl04(x04, x05, x06, x07, x08, x09, x10, x11, x12, x13)) { } void dummy() override { } };
struct i05 { virtual ~i05() noexcept = default; virtual void dummy() = 0; }; struct impl05 : i05 { INJECT(impl05(x05, x06, x07, x08, x09, x10, x11, x12, x13, x14)) { } void dummy() override { } };
struct i06 { virtual ~i06() noexcept = default; virtual void dummy() = 0; }; struct impl06 : i06 { INJECT(impl06(x06, x07, x08, x09, x10, x11, x12, x13, x14, x15)) { } void dummy() override { } };
struct i07 { virtual ~i07() noexcept = default; virtual void dummy() = 0; }; struct impl07 : i07 { INJECT(impl07(x07, x08, x09, x10, x11, x12, x13, x14, x15, x16)) { } void dummy() override { } };
struct i08 { virtual ~i08() noexcept = default; virtual void dummy() = 0; }; struct impl08 : i08 { INJECT(impl08(x08, x09, x10, x11, x12, x13, x14, x15, x16, x17)) { } void dummy() override { } };
struct i09 { virtual ~i09() noexcept = default; virtual void dummy() = 0; }; struct impl09 : i09 { INJECT(impl09(x09, x10, x11, x12, x13, x14, x15, x16, x17, x18)) { } void dummy() override { } };
struct i10 { virtual ~i10() noexcept = default; virtual void dummy() = 0; }; struct impl10 : i10 { INJECT(impl10(x10, x11, x12, x13, x14, x15, x16, x17, x18, x19)) { } void dummy() override { } };
struct i11 { virtual ~i11() noexcept = default; virtual void dummy() = 0; }; struct impl11 : i11 { INJECT(impl11(x11, x12, x13, x14, x15, x16, x17, x18, x19, x20)) { } void dummy() override { } };
struct i12 { virtual ~i12() noexcept = default; virtual void dummy() = 0; }; struct impl12 : i12 { INJECT(impl12(x12, x13, x14, x15, x16, x17, x18, x19, x20, x21)) { } void dummy() override { } };
struct i13 { virtual ~i13() noexcept = default; virtual void dummy() = 0; }; struct impl13 : i13 { INJECT(impl13(x13, x14, x15, x16, x17, x18, x19, x20, x21, x22)) { } void dummy() override { } };
struct i14 { virtual ~i14() noexcept = default; virtual void dummy() = 0; }; struct impl14 : i14 { INJECT(impl14(x14, x15, x16, x17, x18, x19, x20, x21, x22, x23)) { } void dummy() override { } };
struct i15 { virtual ~i15() noexcept = default; virtual void dummy() = 0; }; struct impl15 : i15 { INJECT(impl15(x15, x16, x17, x18, x19, x20, x21, x22, x23, x24)) { } void dummy() override { } };
struct i16 { virtual ~i16() noexcept = default; virtual void dummy() = 0; }; struct impl16 : i16 { INJECT(impl16(x16, x17, x18, x19, x20, x21, x22, x23, x24, x25)) { } void dummy() override { } };
struct i17 { virtual ~i17() noexcept = default; virtual void dummy() = 0; }; struct impl17 : i17 { INJECT(impl17(x17, x18, x19, x20, x21, x22, x23, x24, x25, x26)) { } void dummy() override { } };
struct i18 { virtual ~i18() noexcept = default; virtual void dummy() = 0; }; struct impl18 : i18 { INJECT(impl18(x18, x19, x20, x21, x22, x23, x24, x25, x26, x27)) { } void dummy() override { } };
struct i19 { virtual ~i19() noexcept = default; virtual void dummy() = 0; }; struct impl19 : i19 { INJECT(impl19(x19, x20, x21, x22, x23, x24, x25, x26, x27, x28)) { } void dummy() override { } };
struct i20 { virtual ~i20() noexcept = default; virtual void dummy() = 0; }; struct impl20 : i20 { INJECT(impl20(x20, x21, x22, x23, x24, x25, x26, x27, x28, x29)) { } void dummy() override { } };
struct i21 { virtual ~i21() noexcept = default; virtual void dummy() = 0; }; struct impl21 : i21 { INJECT(impl21(x21, x22, x23, x24, x25, x26, x27, x28, x29, x30)) { } void dummy() override { } };
struct i22 { virtual ~i22() noexcept = default; virtual void dummy() = 0; }; struct impl22 : i22 { INJECT(impl22(x22, x23, x24, x25, x26, x27, x28, x29, x30, x31)) { } void dummy() override { } };
struct i23 { virtual ~i23() noexcept = default; virtual void dummy() = 0; }; struct impl23 : i23 { INJECT(impl23(x23, x24, x25, x26, x27, x28, x29, x30, x31, x32)) { } void dummy() override { } };
struct i24 { virtual ~i24() noexcept = default; virtual void dummy() = 0; }; struct impl24 : i24 { INJECT(impl24(x24, x25, x26, x27, x28, x29, x30, x31, x32, x33)) { } void dummy() override { } };
struct i25 { virtual ~i25() noexcept = default; virtual void dummy() = 0; }; struct impl25 : i25 { INJECT(impl25(x25, x26, x27, x28, x29, x30, x31, x32, x33, x34)) { } void dummy() override { } };
struct i26 { virtual ~i26() noexcept = default; virtual void dummy() = 0; }; struct impl26 : i26 { INJECT(impl26(x26, x27, x28, x29, x30, x31, x32, x33, x34, x35)) { } void dummy() override { } };
struct i27 { virtual ~i27() noexcept = default; virtual void dummy() = 0; }; struct impl27 : i27 { INJECT(impl27(x27, x28, x29, x30, x31, x32, x33, x34, x35, x36)) { } void dummy() override { } };
struct i28 { virtual ~i28() noexcept = default; virtual void dummy() = 0; }; struct impl28 : i28 { INJECT(impl28(x28, x29, x30, x31, x32, x33, x34, x35, x36, x37)) { } void dummy() override { } };
struct i29 { virtual ~i29() noexcept = default; virtual void dummy() = 0; }; struct impl29 : i29 { INJECT(impl29(x29, x30, x31, x32, x33, x34, x35, x36, x37, x38)) { } void dummy() override { } };
struct i30 { virtual ~i30() noexcept = default; virtual void dummy() = 0; }; struct impl30 : i30 { INJECT(impl30(x30, x31, x32, x33, x34, x35, x36, x37, x38, x39)) { } void dummy() override { } };
struct i31 { virtual ~i31() noexcept = default; virtual void dummy() = 0; }; struct impl31 : i31 { INJECT(impl31(x31, x32, x33, x34, x35, x36, x37, x38, x39, x40)) { } void dummy() override { } };
struct i32 { virtual ~i32() noexcept = default; virtual void dummy() = 0; }; struct impl32 : i32 { INJECT(impl32(x32, x33, x34, x35, x36, x37, x38, x39, x40, x41)) { } void dummy() override { } };
struct i33 { virtual ~i33() noexcept = default; virtual void dummy() = 0; }; struct impl33 : i33 { INJECT(impl33(x33, x34, x35, x36, x37, x38, x39, x40, x41, x42)) { } void dummy() override { } };
struct i34 { virtual ~i34() noexcept = default; virtual void dummy() = 0; }; struct impl34 : i34 { INJECT(impl34(x34, x35, x36, x37, x38, x39, x40, x41, x42, x43)) { } void dummy() override { } };
struct i35 { virtual ~i35() noexcept = default; virtual void dummy() = 0; }; struct impl35 : i35 { INJECT(impl35(x35, x36, x37, x38, x39, x40, x41, x42, x43, x44)) { } void dummy() override { } };
struct i36 { virtual ~i36() noexcept = default; virtual void dummy() = 0; }; struct impl36 : i36 { INJECT(impl36(x36, x37, x38, x39, x40, x41, x42, x43, x44, x45)) { } void dummy() override { } };
struct i37 { virtual ~i37() noexcept = default; virtual void dummy() = 0; }; struct impl37 : i37 { INJECT(impl37(x37, x38, x39, x40, x41, x42, x43, x44, x45, x46)) { } void dummy() override { } };
struct i38 { virtual ~i38() noexcept = default; virtual void dummy() = 0; }; struct impl38 : i38 { INJECT(impl38(x38, x39, x40, x41, x42, x43, x44, x45, x46, x47)) { } void dummy() override { } };
struct i39 { virtual ~i39() noexcept = default; virtual void dummy() = 0; }; struct impl39 : i39 { INJECT(impl39(x39, x40, x41, x42, x43, x44, x45, x46, x47, x48)) { } void dummy() override { } };
struct i40 { virtual ~i40() noexcept = default; virtual void dummy() = 0; }; struct impl40 : i40 { INJECT(impl40(x40, x41, x42, x43, x44, x45, x46, x47, x48, x49)) { } void dummy() override { } };
struct i41 { virtual ~i41() noexcept = default; virtual void dummy() = 0; }; struct impl41 : i41 { INJECT(impl41(x41, x42, x43, x44, x45, x46, x47, x48, x49, x50)) { } void dummy() override { } };
struct i42 { virtual ~i42() noexcept = default; virtual void dummy() = 0; }; struct impl42 : i42 { INJECT(impl42(x42, x43, x44, x45, x46, x47, x48, x49, x50, x51)) { } void dummy() override { } };
struct i43 { virtual ~i43() noexcept = default; virtual void dummy() = 0; }; struct impl43 : i43 { INJECT(impl43(x43, x44, x45, x46, x47, x48, x49, x50, x51, x52)) { } void dummy() override { } };
struct i44 { virtual ~i44() noexcept = default; virtual void dummy() = 0; }; struct impl44 : i44 { INJECT(impl44(x44, x45, x46, x47, x48, x49, x50, x51, x52, x53)) { } void dummy() override { } };
struct i45 { virtual ~i45() noexcept = default; virtual void dummy() = 0; }; struct impl45 : i45 { INJECT(impl45(x45, x46, x47, x48, x49, x50, x51, x52, x53, x54)) { } void dummy() override { } };
struct i46 { virtual ~i46() noexcept = default; virtual void dummy() = 0; }; struct impl46 : i46 { INJECT(impl46(x46, x47, x48, x49, x50, x51, x52, x53, x54, x55)) { } void dummy() override { } };
struct i47 { virtual ~i47() noexcept = default; virtual void dummy() = 0; }; struct impl47 : i47 { INJECT(impl47(x47, x48, x49, x50, x51, x52, x53, x54, x55, x56)) { } void dummy() override { } };
struct i48 { virtual ~i48() noexcept = default; virtual void dummy() = 0; }; struct impl48 : i48 { INJECT(impl48(x48, x49, x50, x51, x52, x53, x54, x55, x56, x57)) { } void dummy() override { } };
struct i49 { virtual ~i49() noexcept = default; virtual void dummy() = 0; }; struct impl49 : i49 { INJECT(impl49(x49, x50, x51, x52, x53, x54, x55, x56, x57, x58)) { } void dummy() override { } };
struct i50 { virtual ~i50() noexcept = default; virtual void dummy() = 0; }; struct impl50 : i50 { INJECT(impl50(x50, x51, x52, x53, x54, x55, x56, x57, x58, x59)) { } void dummy() override { } };
struct i51 { virtual ~i51() noexcept = default; virtual void dummy() = 0; }; struct impl51 : i51 { INJECT(impl51(x51, x52, x53, x54, x55, x56, x57, x58, x59, x60)) { } void dummy() override { } };
struct i52 { virtual ~i52() noexcept = default; virtual void dummy() = 0; }; struct impl52 : i52 { INJECT(impl52(x52, x53, x54, x55, x56, x57, x58, x59, x60, x61)) { } void dummy() override { } };
struct i53 { virtual ~i53() noexcept = default; virtual void dummy() = 0; }; struct impl53 : i53 { INJECT(impl53(x53, x54, x55, x56, x57, x58, x59, x60, x61, x62)) { } void dummy() override { } };
struct i54 { virtual ~i54() noexcept = default; virtual void dummy() = 0; }; struct impl54 : i54 { INJECT(impl54(x54, x55, x56, x57, x58, x59, x60, x61, x62, x63)) { } void dummy() override { } };
struct i55 { virtual ~i55() noexcept = default; virtual void dummy() = 0; }; struct impl55 : i55 { INJECT(impl55(x55, x56, x57, x58, x59, x60, x61, x62, x63, x64)) { } void dummy() override { } };
struct i56 { virtual ~i56() noexcept = default; virtual void dummy() = 0; }; struct impl56 : i56 { INJECT(impl56(x56, x57, x58, x59, x60, x61, x62, x63, x64, x65)) { } void dummy() override { } };
struct i57 { virtual ~i57() noexcept = default; virtual void dummy() = 0; }; struct impl57 : i57 { INJECT(impl57(x57, x58, x59, x60, x61, x62, x63, x64, x65, x66)) { } void dummy() override { } };
struct i58 { virtual ~i58() noexcept = default; virtual void dummy() = 0; }; struct impl58 : i58 { INJECT(impl58(x58, x59, x60, x61, x62, x63, x64, x65, x66, x67)) { } void dummy() override { } };
struct i59 { virtual ~i59() noexcept = default; virtual void dummy() = 0; }; struct impl59 : i59 { INJECT(impl59(x59, x60, x61, x62, x63, x64, x65, x66, x67, x68)) { } void dummy() override { } };
struct i60 { virtual ~i60() noexcept = default; virtual void dummy() = 0; }; struct impl60 : i60 { INJECT(impl60(x60, x61, x62, x63, x64, x65, x66, x67, x68, x69)) { } void dummy() override { } };
struct i61 { virtual ~i61() noexcept = default; virtual void dummy() = 0; }; struct impl61 : i61 { INJECT(impl61(x61, x62, x63, x64, x65, x66, x67, x68, x69, x70)) { } void dummy() override { } };
struct i62 { virtual ~i62() noexcept = default; virtual void dummy() = 0; }; struct impl62 : i62 { INJECT(impl62(x62, x63, x64, x65, x66, x67, x68, x69, x70, x71)) { } void dummy() override { } };
struct i63 { virtual ~i63() noexcept = default; virtual void dummy() = 0; }; struct impl63 : i63 { INJECT(impl63(x63, x64, x65, x66, x67, x68, x69, x70, x71, x72)) { } void dummy() override { } };
struct i64 { virtual ~i64() noexcept = default; virtual void dummy() = 0; }; struct impl64 : i64 { INJECT(impl64(x64, x65, x66, x67, x68, x69, x70, x71, x72, x73)) { } void dummy() override { } };
struct i65 { virtual ~i65() noexcept = default; virtual void dummy() = 0; }; struct impl65 : i65 { INJECT(impl65(x65, x66, x67, x68, x69, x70, x71, x72, x73, x74)) { } void dummy() override { } };
struct i66 { virtual ~i66() noexcept = default; virtual void dummy() = 0; }; struct impl66 : i66 { INJECT(impl66(x66, x67, x68, x69, x70, x71, x72, x73, x74, x75)) { } void dummy() override { } };
struct i67 { virtual ~i67() noexcept = default; virtual void dummy() = 0; }; struct impl67 : i67 { INJECT(impl67(x67, x68, x69, x70, x71, x72, x73, x74, x75, x76)) { } void dummy() override { } };
struct i68 { virtual ~i68() noexcept = default; virtual void dummy() = 0; }; struct impl68 : i68 { INJECT(impl68(x68, x69, x70, x71, x72, x73, x74, x75, x76, x77)) { } void dummy() override { } };
struct i69 { virtual ~i69() noexcept = default; virtual void dummy() = 0; }; struct impl69 : i69 { INJECT(impl69(x69, x70, x71, x72, x73, x74, x75, x76, x77, x78)) { } void dummy() override { } };
struct i70 { virtual ~i70() noexcept = default; virtual void dummy() = 0; }; struct impl70 : i70 { INJECT(impl70(x70, x71, x72, x73, x74, x75, x76, x77, x78, x79)) { } void dummy() override { } };
struct i71 { virtual ~i71() noexcept = default; virtual void dummy() = 0; }; struct impl71 : i71 { INJECT(impl71(x71, x72, x73, x74, x75, x76, x77, x78, x79, x80)) { } void dummy() override { } };
struct i72 { virtual ~i72() noexcept = default; virtual void dummy() = 0; }; struct impl72 : i72 { INJECT(impl72(x72, x73, x74, x75, x76, x77, x78, x79, x80, x81)) { } void dummy() override { } };
struct i73 { virtual ~i73() noexcept = default; virtual void dummy() = 0; }; struct impl73 : i73 { INJECT(impl73(x73, x74, x75, x76, x77, x78, x79, x80, x81, x82)) { } void dummy() override { } };
struct i74 { virtual ~i74() noexcept = default; virtual void dummy() = 0; }; struct impl74 : i74 { INJECT(impl74(x74, x75, x76, x77, x78, x79, x80, x81, x82, x83)) { } void dummy() override { } };
struct i75 { virtual ~i75() noexcept = default; virtual void dummy() = 0; }; struct impl75 : i75 { INJECT(impl75(x75, x76, x77, x78, x79, x80, x81, x82, x83, x84)) { } void dummy() override { } };
struct i76 { virtual ~i76() noexcept = default; virtual void dummy() = 0; }; struct impl76 : i76 { INJECT(impl76(x76, x77, x78, x79, x80, x81, x82, x83, x84, x85)) { } void dummy() override { } };
struct i77 { virtual ~i77() noexcept = default; virtual void dummy() = 0; }; struct impl77 : i77 { INJECT(impl77(x77, x78, x79, x80, x81, x82, x83, x84, x85, x86)) { } void dummy() override { } };
struct i78 { virtual ~i78() noexcept = default; virtual void dummy() = 0; }; struct impl78 : i78 { INJECT(impl78(x78, x79, x80, x81, x82, x83, x84, x85, x86, x87)) { } void dummy() override { } };
struct i79 { virtual ~i79() noexcept = default; virtual void dummy() = 0; }; struct impl79 : i79 { INJECT(impl79(x79, x80, x81, x82, x83, x84, x85, x86, x87, x88)) { } void dummy() override { } };
struct i80 { virtual ~i80() noexcept = default; virtual void dummy() = 0; }; struct impl80 : i80 { INJECT(impl80(x80, x81, x82, x83, x84, x85, x86, x87, x88, x89)) { } void dummy() override { } };
struct i81 { virtual ~i81() noexcept = default; virtual void dummy() = 0; }; struct impl81 : i81 { INJECT(impl81(x81, x82, x83, x84, x85, x86, x87, x88, x89, x90)) { } void dummy() override { } };
struct i82 { virtual ~i82() noexcept = default; virtual void dummy() = 0; }; struct impl82 : i82 { INJECT(impl82(x82, x83, x84, x85, x86, x87, x88, x89, x90, x91)) { } void dummy() override { } };
struct i83 { virtual ~i83() noexcept = default; virtual void dummy() = 0; }; struct impl83 : i83 { INJECT(impl83(x83, x84, x85, x86, x87, x88, x89, x90, x91, x92)) { } void dummy() override { } };
struct i84 { virtual ~i84() noexcept = default; virtual void dummy() = 0; }; struct impl84 : i84 { INJECT(impl84(x84, x85, x86, x87, x88, x89, x90, x91, x92, x93)) { } void dummy() override { } };
struct i85 { virtual ~i85() noexcept = default; virtual void dummy() = 0; }; struct impl85 : i85 { INJECT(impl85(x85, x86, x87, x88, x89, x90, x91, x92, x93, x94)) { } void dummy() override { } };
struct i86 { virtual ~i86() noexcept = default; virtual void dummy() = 0; }; struct impl86 : i86 { INJECT(impl86(x86, x87, x88, x89, x90, x91, x92, x93, x94, x95)) { } void dummy() override { } };
struct i87 { virtual ~i87() noexcept = default; virtual void dummy() = 0; }; struct impl87 : i87 { INJECT(impl87(x87, x88, x89, x90, x91, x92, x93, x94, x95, x96)) { } void dummy() override { } };
struct i88 { virtual ~i88() noexcept = default; virtual void dummy() = 0; }; struct impl88 : i88 { INJECT(impl88(x88, x89, x90, x91, x92, x93, x94, x95, x96, x97)) { } void dummy() override { } };
struct i89 { virtual ~i89() noexcept = default; virtual void dummy() = 0; }; struct impl89 : i89 { INJECT(impl89(x89, x90, x91, x92, x93, x94, x95, x96, x97, x98)) { } void dummy() override { } };
struct i90 { virtual ~i90() noexcept = default; virtual void dummy() = 0; }; struct impl90 : i90 { INJECT(impl90(x90, x91, x92, x93, x94, x95, x96, x97, x98, x99)) { } void dummy() override { } };
struct i91 { virtual ~i91() noexcept = default; virtual void dummy() = 0; }; struct impl91 : i91 { INJECT(impl91(x91, x92, x93, x94, x95, x96, x97, x98, x99, x00)) { } void dummy() override { } };
struct i92 { virtual ~i92() noexcept = default; virtual void dummy() = 0; }; struct impl92 : i92 { INJECT(impl92(x92, x93, x94, x95, x96, x97, x98, x99, x00, x01)) { } void dummy() override { } };
struct i93 { virtual ~i93() noexcept = default; virtual void dummy() = 0; }; struct impl93 : i93 { INJECT(impl93(x93, x94, x95, x96, x97, x98, x99, x00, x01, x02)) { } void dummy() override { } };
struct i94 { virtual ~i94() noexcept = default; virtual void dummy() = 0; }; struct impl94 : i94 { INJECT(impl94(x94, x95, x96, x97, x98, x99, x00, x01, x02, x03)) { } void dummy() override { } };
struct i95 { virtual ~i95() noexcept = default; virtual void dummy() = 0; }; struct impl95 : i95 { INJECT(impl95(x95, x96, x97, x98, x99, x00, x01, x02, x03, x04)) { } void dummy() override { } };
struct i96 { virtual ~i96() noexcept = default; virtual void dummy() = 0; }; struct impl96 : i96 { INJECT(impl96(x96, x97, x98, x99, x00, x01, x02, x03, x04, x05)) { } void dummy() override { } };
struct i97 { virtual ~i97() noexcept = default; virtual void dummy() = 0; }; struct impl97 : i97 { INJECT(impl97(x97, x98, x99, x00, x01, x02, x03, x04, x05, x06)) { } void dummy() override { } };
struct i98 { virtual ~i98() noexcept = default; virtual void dummy() = 0; }; struct impl98 : i98 { INJECT(impl98(x98, x99, x00, x01, x02, x03, x04, x05, x06, x07)) { } void dummy() override { } };
struct i99 { virtual ~i99() noexcept = default; virtual void dummy() = 0; }; struct impl99 : i99 { INJECT(impl99(x99, x00, x01, x02, x03, x04, x05, x06, x07, x08)) { } void dummy() override { } };

struct c0 { INJECT(c0(std::unique_ptr<i00>, std::unique_ptr<i01>, std::unique_ptr<i02>, std::unique_ptr<i03>, std::unique_ptr<i04>, std::unique_ptr<i05>, std::unique_ptr<i06>, std::unique_ptr<i07>, std::unique_ptr<i08>, std::unique_ptr<i09>)) { } };
struct c1 { INJECT(c1(std::unique_ptr<i10>, std::unique_ptr<i11>, std::unique_ptr<i12>, std::unique_ptr<i13>, std::unique_ptr<i14>, std::unique_ptr<i15>, std::unique_ptr<i16>, std::unique_ptr<i17>, std::unique_ptr<i18>, std::unique_ptr<i19>)) { } };
struct c2 { INJECT(c2(std::unique_ptr<i20>, std::unique_ptr<i21>, std::unique_ptr<i22>, std::unique_ptr<i23>, std::unique_ptr<i24>, std::unique_ptr<i25>, std::unique_ptr<i26>, std::unique_ptr<i27>, std::unique_ptr<i28>, std::unique_ptr<i29>)) { } };
struct c3 { INJECT(c3(std::unique_ptr<i30>, std::unique_ptr<i31>, std::unique_ptr<i32>, std::unique_ptr<i33>, std::unique_ptr<i34>, std::unique_ptr<i35>, std::unique_ptr<i36>, std::unique_ptr<i37>, std::unique_ptr<i38>, std::unique_ptr<i39>)) { } };
struct c4 { INJECT(c4(std::unique_ptr<i40>, std::unique_ptr<i41>, std::unique_ptr<i42>, std::unique_ptr<i43>, std::unique_ptr<i44>, std::unique_ptr<i45>, std::unique_ptr<i46>, std::unique_ptr<i47>, std::unique_ptr<i48>, std::unique_ptr<i49>)) { } };
struct c5 { INJECT(c5(std::unique_ptr<i50>, std::unique_ptr<i51>, std::unique_ptr<i52>, std::unique_ptr<i53>, std::unique_ptr<i54>, std::unique_ptr<i55>, std::unique_ptr<i56>, std::unique_ptr<i57>, std::unique_ptr<i58>, std::unique_ptr<i59>)) { } };
struct c6 { INJECT(c6(std::unique_ptr<i60>, std::unique_ptr<i61>, std::unique_ptr<i62>, std::unique_ptr<i63>, std::unique_ptr<i64>, std::unique_ptr<i65>, std::unique_ptr<i66>, std::unique_ptr<i67>, std::unique_ptr<i68>, std::unique_ptr<i69>)) { } };
struct c7 { INJECT(c7(std::unique_ptr<i70>, std::unique_ptr<i71>, std::unique_ptr<i72>, std::unique_ptr<i73>, std::unique_ptr<i74>, std::unique_ptr<i75>, std::unique_ptr<i76>, std::unique_ptr<i77>, std::unique_ptr<i78>, std::unique_ptr<i79>)) { } };
struct c8 { INJECT(c8(std::unique_ptr<i80>, std::unique_ptr<i81>, std::unique_ptr<i82>, std::unique_ptr<i83>, std::unique_ptr<i84>, std::unique_ptr<i85>, std::unique_ptr<i86>, std::unique_ptr<i87>, std::unique_ptr<i88>, std::unique_ptr<i89>)) { } };
struct c9 { INJECT(c9(std::unique_ptr<i90>, std::unique_ptr<i91>, std::unique_ptr<i92>, std::unique_ptr<i93>, std::unique_ptr<i94>, std::unique_ptr<i95>, std::unique_ptr<i96>, std::unique_ptr<i97>, std::unique_ptr<i98>, std::unique_ptr<i99>)) { } };

struct small_complexity { INJECT(small_complexity(x32)) { } };
struct medium_complexity { INJECT(medium_complexity(x99)) { } };
struct big_complexity { INJECT(big_complexity(c0, c1, c2, c3, c4, c5, c6, c7, c8, c9)) { } };

fruit::Component<big_complexity> module() {
  return fruit::createComponent()
      .bind<i00, impl00>()
      .bind<i01, impl01>()
      .bind<i02, impl02>()
      .bind<i03, impl03>()
      .bind<i04, impl04>()
      .bind<i05, impl05>()
      .bind<i06, impl06>()
      .bind<i07, impl07>()
      .bind<i08, impl08>()
      .bind<i09, impl09>()
      .bind<i10, impl10>()
      .bind<i11, impl11>()
      .bind<i12, impl12>()
      .bind<i13, impl13>()
      .bind<i14, impl14>()
      .bind<i15, impl15>()
      .bind<i16, impl16>()
      .bind<i17, impl17>()
      .bind<i18, impl18>()
      .bind<i19, impl19>()
      .bind<i20, impl20>()
      .bind<i21, impl21>()
      .bind<i22, impl22>()
      .bind<i23, impl23>()
      .bind<i24, impl24>()
      .bind<i25, impl25>()
      .bind<i26, impl26>()
      .bind<i27, impl27>()
      .bind<i28, impl28>()
      .bind<i29, impl29>()
      .bind<i30, impl30>()
      .bind<i31, impl31>()
      .bind<i32, impl32>()
      .bind<i33, impl33>()
      .bind<i34, impl34>()
      .bind<i35, impl35>()
      .bind<i36, impl36>()
      .bind<i37, impl37>()
      .bind<i38, impl38>()
      .bind<i39, impl39>()
      .bind<i40, impl40>()
      .bind<i41, impl41>()
      .bind<i42, impl42>()
      .bind<i43, impl43>()
      .bind<i44, impl44>()
      .bind<i45, impl45>()
      .bind<i46, impl46>()
      .bind<i47, impl47>()
      .bind<i48, impl48>()
      .bind<i49, impl49>()
      .bind<i50, impl50>()
      .bind<i51, impl51>()
      .bind<i52, impl52>()
      .bind<i53, impl53>()
      .bind<i54, impl54>()
      .bind<i55, impl55>()
      .bind<i56, impl56>()
      .bind<i57, impl57>()
      .bind<i58, impl58>()
      .bind<i59, impl59>()
      .bind<i60, impl60>()
      .bind<i61, impl61>()
      .bind<i62, impl62>()
      .bind<i63, impl63>()
      .bind<i64, impl64>()
      .bind<i65, impl65>()
      .bind<i66, impl66>()
      .bind<i67, impl67>()
      .bind<i68, impl68>()
      .bind<i69, impl69>()
      .bind<i70, impl70>()
      .bind<i71, impl71>()
      .bind<i72, impl72>()
      .bind<i73, impl73>()
      .bind<i74, impl74>()
      .bind<i75, impl75>()
      .bind<i76, impl76>()
      .bind<i77, impl77>()
      .bind<i78, impl78>()
      .bind<i79, impl79>()
      .bind<i80, impl80>()
      .bind<i81, impl81>()
      .bind<i82, impl82>()
      .bind<i83, impl83>()
      .bind<i84, impl84>()
      .bind<i85, impl85>()
      .bind<i86, impl86>()
      .bind<i87, impl87>()
      .bind<i88, impl88>()
      .bind<i89, impl89>()
      .bind<i90, impl90>()
      .bind<i91, impl91>()
      .bind<i92, impl92>()
      .bind<i93, impl93>()
      .bind<i94, impl94>()
      .bind<i95, impl95>()
      .bind<i96, impl96>()
      .bind<i97, impl97>()
      .bind<i98, impl98>()
      .bind<i99, impl99>();
}

int main() {
    fruit::Injector<big_complexity> injector{module()};
    injector.get<big_complexity>();
}

