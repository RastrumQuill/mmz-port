// sub_08067B68 at 0x08067B68 (thumb)

undefined4 sub_08067B68(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  iVar1 = sub_08048BE8();
  if ((iVar1 == 0) && (*(int *)(iVar2 + 0xc0) == 0)) {
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar1 + 0x4c);
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x4c) + -0x100;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
  return in_lr;
}

