// sub_080D8E50 at 0x080D8E50 (thumb)

undefined4 sub_080D8E50(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (DAT_0202e144 == '\0') {
    iVar4 = *(int *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0xc) == '\x01') {
      cVar1 = sub_080D62F4(iVar4 + 0x54,(undefined4 *)(param_1 + 0xbc));
      if (cVar1 != '\0') {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        sub_080D5430(param_1,param_1 + 0xb4,param_1 + 0x5c,param_1 + 0xc4,2,0,0xfffff400);
      }
      sub_080EF118(param_1,*(undefined4 *)(&DAT_0834b5c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    uVar2 = sub_080BED50(param_1,*(undefined *)(param_1 + 0x13),2);
    *(undefined *)(param_1 + 0x13) = uVar2;
    sub_08012A14(param_1);
    uVar3 = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = uVar3;
  }
  return in_lr;
}

