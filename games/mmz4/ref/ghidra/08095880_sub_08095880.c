// sub_08095880 at 0x08095880 (thumb)

undefined4 sub_08095880(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xbb);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(char *)(param_1 + 0x12) = (char)uVar4 * -0x68 + 't';
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar3 = *(int *)(param_1 + 0x5c);
  iVar2 = *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17))
          * iVar3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar2 >> 8);
  iVar2 = iVar3 * (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar2 >> 8);
  iVar3 = iVar3 + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  if (0x380 < iVar3) {
    *(undefined4 *)(param_1 + 0x5c) = 0x380;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    iVar3 = sub_0805C370(uVar1);
    if (0xc000 < (iVar3 - *(int *)(param_1 + 0x54)) + 0xd800U) {
      *(char *)(param_1 + 0x12) = (char)(uVar4 << 7);
      *(undefined *)(param_1 + 0x13) = 0;
    }
  }
  sub_08095A8C(param_1);
  uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x3000 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

