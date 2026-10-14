// sub_0804620C at 0x0804620C (thumb)

undefined4 sub_0804620C(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa008);
    sub_080032EC(0x50);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0xfffffe80;
    }
    else {
      uVar1 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pcVar2 = (char *)(param_1 + 0x71);
  if (*pcVar2 == '\x03') {
    sub_08006E08(param_1 + 0x74,&DAT_0833a980);
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_0833a968);
  }
  if ((*pcVar2 == '\x01') || (*pcVar2 == '\x05')) {
    sub_08015518(1,param_1 + 0x54);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  if (*pcVar2 == '\a') {
    sub_08006E08(param_1 + 0x74,&DAT_0833a980);
    *(undefined *)(param_1 + 0xd) = 0x18;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

