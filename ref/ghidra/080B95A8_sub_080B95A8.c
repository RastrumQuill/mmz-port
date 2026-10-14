// sub_080B95A8 at 0x080B95A8 (thumb)

undefined4 sub_080B95A8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = sub_080B9B94();
  if (cVar1 != *(char *)(param_1 + 0x13)) {
    *(char *)(param_1 + 0x13) = cVar1;
    uVar2 = sub_080B9A7C(param_1);
    iVar3 = sub_080B46A0(uVar2,*(undefined *)(param_1 + 0x12),cVar1);
    sub_080033F0(param_1 + 0x6c,(&DAT_082b86b6)[(iVar3 << 0x18) >> 0x16]);
  }
  return in_lr;
}

