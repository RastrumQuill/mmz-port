// sub_080A3528 at 0x080A3528 (thumb)

undefined4 sub_080A3528(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      iVar3 = *(int *)(param_1 + 0x4c) + 0x80;
      *(int *)(param_1 + 0x4c) = iVar3;
      if (*(int *)(param_1 + 0xbc) + 0x3300 < iVar3) {
        *(int *)(param_1 + 0xc4) = iVar3 - *(int *)(iVar2 + 0x4c);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else if (bVar1 < 2) {
      if ((bVar1 == 0) && (*(char *)(iVar2 + 0xf) == '\x06')) {
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    else if (bVar1 == 2) {
      iVar2 = *(int *)(iVar2 + 0x4c) + *(int *)(param_1 + 0xc4);
      *(int *)(param_1 + 0x4c) = iVar2;
      if (iVar2 < *(int *)(param_1 + 0xbc)) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xbc);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A35C0(param_1);
  }
  return in_lr;
}

