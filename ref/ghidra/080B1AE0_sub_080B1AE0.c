// sub_080B1AE0 at 0x080B1AE0 (thumb)

undefined4 sub_080B1AE0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_0809C980();
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    if (*(char *)(iVar4 + 0xf) != '\0') {
      sub_0809C930(param_1,4);
      sub_0809C980(param_1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) &&
       (iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54),
       *(int *)(param_1 + 0x4c) = iVar3, iVar3 < *(int *)(iVar4 + 0x4c) + -0xc00)) {
      sub_0809C930(param_1,5);
      sub_0809C980(param_1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else if (bVar1 == 2) {
    *(int *)(param_1 + 0x4c) = *(int *)(iVar4 + 0x4c) + -0xc00;
    uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (0x1000 < uVar2) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  return in_lr;
}

