// sub_0809EF78 at 0x0809EF78 (thumb)

undefined4 sub_0809EF78(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x7502);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_0801CF00(param_1,0x7503);
      *(undefined *)(param_1 + 0x12) = 0xff;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      if (*(char *)(param_1 + 0x10) == '\0') {
        local_10 = *(int *)(param_1 + 0x54);
        iVar2 = -0x2000;
      }
      else {
        local_10 = *(int *)(param_1 + 0x54);
        iVar2 = 0x2000;
      }
      local_10 = local_10 + iVar2;
      local_c = *(int *)(param_1 + 0x58) + 0x400;
      sub_080C97DC(&local_10,0,0,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_08002B10(0x138);
    }
    else if (*(char *)(param_1 + 0xe) == '\x02') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0x12) = 0xc4;
    }
  }
  return in_lr;
}

