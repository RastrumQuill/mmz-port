// sub_0807B7CC at 0x0807B7CC (thumb)

undefined4 sub_0807B7CC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) =
         *(undefined *)(*(int *)(param_1 + 0x28) + 0xc0 + (uint)*(byte *)(param_1 + 0x10));
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x500c);
      }
      else {
        sub_080127E4(param_1,(uint)*(byte *)(param_1 + 0x10) * 3 + 0x5038);
      }
      sub_08006E08(param_1 + 0x74,&DAT_083402c8);
      *(undefined *)(param_1 + 0x12) = 0x18;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080128D4(param_1);
  return in_lr;
}

