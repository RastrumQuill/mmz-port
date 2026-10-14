// sub_080151DC at 0x080151DC (thumb)

undefined4 sub_080151DC(int param_1)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  if (cVar1 == '\0') {
    uVar2 = *(ushort *)(*(int *)(param_1 + 0xc) + 4) | 0x8000;
  }
  else {
    if (cVar1 != '\x01') {
      return 0;
    }
    uVar2 = 0;
  }
  *(ushort *)(param_1 + 0x14c) = uVar2;
  return 0;
}

