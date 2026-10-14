// sub_080D6CC4 at 0x080D6CC4 (thumb)

undefined4 sub_080D6CC4(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc) == '\x01') &&
     (sub_080EF118(param_1,*(undefined4 *)(&DAT_0834b3b4 + (uint)*(byte *)(param_1 + 0xd) * 4)),
     *(char *)(param_1 + 0xc) == '\x01')) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + -0x7800 + DAT_0202ed50;
    iVar2 = *(int *)(param_1 + 0xb8) + -0x5000 + DAT_0202ed54;
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x58) =
         iVar2 + (short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x12) & 0x1f) * 8] * 4;
    if (*(char *)(param_1 + 0xd) == '\0') {
      uVar1 = sub_080BED50(param_1,*(undefined *)(param_1 + 0x13),0);
      *(undefined *)(param_1 + 0x13) = uVar1;
    }
  }
  sub_08012A14(param_1);
  return in_lr;
}

