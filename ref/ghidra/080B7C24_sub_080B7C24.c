// sub_080B7C24 at 0x080B7C24 (thumb)

undefined4 sub_080B7C24(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (DAT_02022878 == '\0') {
    iVar4 = *(int *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0xc) == '\x01') {
      cVar1 = sub_080B5154(iVar4 + 0x4c,(undefined4 *)(param_1 + 0xc4));
      if (cVar1 != '\0') {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        sub_080B4200(param_1,param_1 + 0xbc,param_1 + 0x54,param_1 + 0xcc,2,0,0xfffff400);
      }
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b83c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    uVar2 = sub_08099BF8(param_1,*(undefined *)(param_1 + 0x13),2);
    *(undefined *)(param_1 + 0x13) = uVar2;
    sub_080B50EC(param_1);
    uVar3 = *(undefined4 *)(iVar4 + 0x50);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar4 + 0x4c);
    *(undefined4 *)(param_1 + 200) = uVar3;
  }
  return in_lr;
}

