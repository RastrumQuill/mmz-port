// sub_0806EA90 at 0x0806EA90 (thumb)

undefined4 sub_0806EA90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  char local_20 [8];
  int local_18;
  undefined4 local_14;
  
  sub_08128B5C(local_20,&DAT_08129207,5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088590b8);
    sub_0801CF00(param_1,0xad00);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined *)(param_1 + 0x12) = 5;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar2;
  if (iVar2 < 1) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      sub_08002B10(0x169);
      local_18 = *(int *)(param_1 + 0x54) + -0xf00;
      local_14 = *(undefined4 *)(param_1 + 0x58);
      cVar1 = local_20[5 - *(byte *)(param_1 + 0x12) & 0xff];
      sub_080BD568(param_1,&local_18,2,cVar1);
      local_18 = *(int *)(param_1 + 0x54) + 0x1000;
      sub_080BD568(param_1,&local_18,2,-0x80 - cVar1);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      *(undefined4 *)(param_1 + 100) = 0x50;
    }
  }
  return in_lr;
}

