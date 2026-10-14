// sub_08043098 at 0x08043098 (thumb)

undefined4 sub_08043098(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa310);
    if ((*(byte *)(param_1 + 10) >> 4 & 1) == 0) {
      iVar2 = sub_08044D54(param_1,0xb);
      iVar4 = *(int *)(param_1 + 0x58) + 0x6000;
      uVar1 = sub_08038E6C(iVar2 - *(int *)(param_1 + 0x54),iVar4 - *(int *)(param_1 + 0x58));
      iVar3 = param_1 + 0x54;
      sub_0809BD14(param_1,iVar3,2,uVar1);
      iVar2 = sub_08044D54(param_1,5);
      uVar1 = sub_08038E6C(iVar2 - *(int *)(param_1 + 0x54),iVar4 - *(int *)(param_1 + 0x58));
      sub_0809BD14(param_1,iVar3,2,uVar1);
      iVar2 = sub_08044D54(param_1,0);
      uVar1 = sub_08038E6C(iVar2 - *(int *)(param_1 + 0x54),iVar4 - *(int *)(param_1 + 0x58));
      sub_0809BD14(param_1,iVar3,2,uVar1);
    }
    else {
      iVar2 = sub_08044D54(param_1,2);
      iVar4 = *(int *)(param_1 + 0x58) + 0x6000;
      uVar1 = sub_08038E6C(iVar2 - *(int *)(param_1 + 0x54),iVar4 - *(int *)(param_1 + 0x58));
      iVar3 = param_1 + 0x54;
      sub_0809BD14(param_1,iVar3,2,uVar1);
      iVar2 = sub_08044D54(param_1,8);
      uVar1 = sub_08038E6C(iVar2 - *(int *)(param_1 + 0x54),iVar4 - *(int *)(param_1 + 0x58));
      sub_0809BD14(param_1,iVar3,2,uVar1);
      iVar2 = sub_08044D54(param_1,0xd);
      uVar1 = sub_08038E6C(iVar2 - *(int *)(param_1 + 0x54),iVar4 - *(int *)(param_1 + 0x58));
      sub_0809BD14(param_1,iVar3,2,uVar1);
    }
    sub_080032EC(0x4d);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

