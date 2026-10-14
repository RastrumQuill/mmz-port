// sub_080DA570 at 0x080DA570 (thumb)

undefined4 sub_080DA570(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if ((*(char *)(iVar2 + 1) == '\x01') &&
     (*(byte *)(iVar2 + 2) < (byte)(&DAT_0834b9bc)[*(byte *)(param_1 + 0x11)])) {
    if ((DAT_0202ebb4 & 2) == 0) {
      puVar1 = &DAT_0834b994;
    }
    else {
      puVar1 = &DAT_0834b96c;
    }
    *(uint *)(param_1 + 0x54) =
         *(int *)(puVar1 + (uint)*(byte *)(param_1 + 0x11) * 8) +
         (uint)*(byte *)(iVar2 + 5) * 0x1000;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
    sub_080DA5D0(param_1);
  }
  return in_lr;
}

