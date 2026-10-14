// sub_0801D8A8 at 0x0801D8A8 (thumb)

undefined4 sub_0801D8A8(int param_1)

{
  int iVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082a7ff4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xc1) = 0;
  *(undefined *)(param_1 + 0xc2) = 0;
  *(undefined *)(param_1 + 0xc3) = 0;
  if ((*(byte *)(param_1 + 0x17a) & 0x80) == 0) {
    *(undefined *)(param_1 + 0x10) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x10) = 1;
  }
  iVar1 = DAT_02022b20;
  *(undefined *)(param_1 + 0x178) = *(undefined *)(DAT_02022b20 + 1);
  *(undefined *)(param_1 + 0x179) = *(undefined *)(iVar1 + 2);
  *(undefined *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined *)(param_1 + 0x116) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  sub_080B4434(param_1,0);
  uVar3 = sub_080B4F88(param_1);
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  uVar3 = sub_08018D7C(param_1,0,0);
  uVar2 = sub_0801C1E8(param_1,uVar3);
  *(undefined *)(param_1 + 0x11c) = uVar2;
  *(undefined *)(param_1 + 0x115) = 0xff;
  *(undefined *)(param_1 + 0x11e) = 0;
  *(undefined *)(param_1 + 0x124) = 0;
  *(undefined *)(param_1 + 0x11f) = 0;
  *(undefined *)(param_1 + 0x122) = 0;
  *(undefined *)(param_1 + 0x123) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined *)(param_1 + 0x125) = 0;
  *(undefined *)(param_1 + 0x128) = 0;
  *(undefined *)(param_1 + 0x129) = 0;
  *(undefined *)(param_1 + 300) = 0;
  *(undefined *)(param_1 + 299) = 0;
  sub_0801B254(param_1);
  sub_08015E90(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08018CC8(param_1);
  sub_08089DB4(param_1,0);
  sub_0801DA48(param_1);
  return in_lr;
}

