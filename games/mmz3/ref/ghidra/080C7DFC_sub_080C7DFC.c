// sub_080C7DFC at 0x080C7DFC (thumb)

undefined4 sub_080C7DFC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    if (cVar1 == '\x01') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar2 = *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      if (((cVar1 != '\x02') && (cVar1 != '\x03')) && (cVar1 != '\x04')) goto LAB_080c7ec0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar2 = *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[bVar2] + 4);
    *(char *)(param_1 + 0xd) = cVar1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
LAB_080c7ec0:
  sub_080C7ED0(param_1);
  return in_lr;
}

