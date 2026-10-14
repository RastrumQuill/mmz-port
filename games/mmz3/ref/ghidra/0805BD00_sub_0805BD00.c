// sub_0805BD00 at 0x0805BD00 (thumb)

undefined4 sub_0805BD00(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xb510);
    sub_0800471C(0x50);
    *(undefined *)(param_1 + 0x12) = 0xa0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0xe) == '\x01') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_0805bd6c;
    uVar3 = 0xb516;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x02') || (*(char *)(param_1 + 0x73) != '\x03'))
    goto LAB_0805bd6c;
    uVar3 = 0xb500;
  }
  sub_08017700(param_1,uVar3);
  sub_080177F4(param_1);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805bd6c:
  bVar1 = DAT_020301b2 & 1;
  if ((DAT_020301b2 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  return in_lr;
}

