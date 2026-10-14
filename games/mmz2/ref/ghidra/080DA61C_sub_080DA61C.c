// sub_080DA61C at 0x080DA61C (thumb)

undefined4 sub_080DA61C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = sub_080DAC14();
  if (cVar1 != *(char *)(param_1 + 0x13)) {
    *(char *)(param_1 + 0x13) = cVar1;
    uVar2 = sub_080DAAE8(param_1);
    iVar3 = sub_080D5908(uVar2,*(undefined *)(param_1 + 0x12),cVar1);
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834b92e + ((iVar3 << 0x18) >> 0x16)));
  }
  return in_lr;
}

