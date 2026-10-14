// sub_080BF598 at 0x080BF598 (thumb)

undefined4 sub_080BF598(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  byte abStack_18 [4];
  
  sub_08128B5C(abStack_18,&DAT_081299c4,2);
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar3 = (uint)bVar1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (uVar3 < 2) {
      sub_08005784(param_1 + 0x74,&DAT_08861a28 + (uint)abStack_18[uVar3] * 0x18);
    }
    if (uVar3 == 0) {
      sub_0801CC9C(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(byte *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      sub_0801CF00(param_1,0x2b00);
    }
    else if (uVar3 == 2) {
      sub_0801CC9C(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      sub_0801CF00(param_1,0x2b00);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x100;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if (iVar2 < DAT_0202ea30 + -0x9800) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

