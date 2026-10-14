// sub_080E9298 at 0x080E9298 (thumb)

undefined4 sub_080E9298(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x802);
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_080D4898(param_1 + 0x54,&DAT_08865f98,0,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    local_18 = *(int *)(param_1 + 0x54) + 0xb00;
    local_14 = *(int *)(param_1 + 0x58) + -0x900;
    sub_080D4898(&local_18,&DAT_08865f44,0,0);
    local_18 = *(int *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0x900;
    sub_080D4898(&local_18,&DAT_08865f60,0,0);
    local_18 = *(int *)(param_1 + 0x54) + -0x400;
    local_14 = *(int *)(param_1 + 0x58) + 0x100;
    sub_080D4898(&local_18,&DAT_08865f7c,0,0);
    local_18 = *(int *)(param_1 + 0x54) + 0xa00;
    local_14 = *(int *)(param_1 + 0x58) + -0x800;
    sub_080D0894(1,&local_18);
    if (DAT_0202cabc < *(int *)(param_1 + 0x58)) {
      sub_08002B10(0x31);
    }
    else {
      sub_08002B10(0x2a);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

