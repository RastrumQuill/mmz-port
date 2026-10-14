// sub_080E05A0 at 0x080E05A0 (thumb)

undefined4 sub_080E05A0(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  short sVar3;
  undefined4 in_lr;
  
  if ((byte)(*(char *)(param_1 + 0x10) - 7U) < 2) {
    if (*(char *)(DAT_0202f5c0 + 0xbc + (uint)(*(char *)(param_1 + 0x10) == '\b')) != -1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836e1d8)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
    sub_0800393C(&DAT_085d8adc,(DAT_0202fbda - 0x17c) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8ae8,(DAT_0202f9da - 2) * 0x20 + 0x200);
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x10);
  sVar3 = *(short *)(&DAT_0836e1f4 + uVar2 * 2);
  if (uVar2 < 3) {
    pbVar1 = &DAT_02002479;
  }
  else if (uVar2 < 5) {
    pbVar1 = &DAT_0200247a;
  }
  else {
    if (uVar2 != 5) goto LAB_080e069a;
    pbVar1 = &DAT_0200247c;
  }
  sVar3 = sVar3 + (ushort)*pbVar1 * 0x100;
LAB_080e069a:
  sub_0801749C(param_1);
  sub_08017700(param_1,sVar3);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_0800736C(param_1 + 0x74,&DAT_0836e208,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80e0a55;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(undefined *)(param_1 + 0x12) = 0xf0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e1d8)[*(byte *)(param_1 + 9)] + 4);
  sub_080E0728(param_1);
  return in_lr;
}

