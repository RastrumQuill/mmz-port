// sub_0802BEF8 at 0x0802BEF8 (thumb)

undefined4 sub_0802BEF8(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835acd4 + (uint)*(byte *)(param_1 + 0xf) * 4));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xf) == '\x02') {
      sub_080177CC(param_1,0x404,2,1);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 1;
      iVar3 = *(int *)(param_1 + 0x5c);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      sVar1 = sub_08032C9C(param_1);
      if (iVar3 < sVar1) {
        sVar1 = sub_08032C9C(param_1);
        *(int *)(param_1 + 0x5c) = (int)sVar1;
      }
    }
    else {
      uVar2 = sub_08025BEC(param_1);
      sub_08017700(param_1,uVar2);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  return in_lr;
}

