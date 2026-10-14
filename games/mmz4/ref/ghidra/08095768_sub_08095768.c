// sub_08095768 at 0x08095768 (thumb)

undefined4 sub_08095768(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xbb);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(byte *)(param_1 + 0x12) = (bVar1 >> 4 & 1) * 'h' + '\f';
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar5 = *(int *)(param_1 + 0x5c);
  iVar4 = *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17))
          * iVar5;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
  iVar4 = iVar5 * (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
  iVar5 = iVar5 + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar5;
  if (0x380 < iVar5) {
    *(undefined4 *)(param_1 + 0x5c) = 0x380;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    iVar5 = sub_0805C370(uVar2);
    if (0xc000 < (iVar5 - *(int *)(param_1 + 0x54)) + 0xd800U) {
      *(undefined *)(param_1 + 0x12) = 0xc0;
      *(undefined *)(param_1 + 0x13) = 0;
    }
  }
  sub_08095A8C(param_1);
  uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x3000 < uVar3) {
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

