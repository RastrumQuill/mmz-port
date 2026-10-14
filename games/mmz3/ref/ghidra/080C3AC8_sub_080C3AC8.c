// sub_080C3AC8 at 0x080C3AC8 (thumb)

undefined4 sub_080C3AC8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ('\x03' < *(char *)(param_1 + 0x71)) {
    cVar1 = sub_08017B8C(param_1);
    sub_08017BCC(param_1,cVar1 + '\x01');
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

