// sub_0803F750 at 0x0803F750 (thumb)

undefined4 sub_0803F750(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,*(short *)(param_1 + 200) + 10U | 0xa200);
    sub_08007390(param_1 + 0x74,&DAT_0835e448);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_08007390(param_1 + 0x74,&DAT_0835e538);
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08017700(param_1,*(short *)(param_1 + 200) + 0xeU | 0xa200);
    *(char *)(param_1 + 0x12) =
         (char)*(undefined2 *)(&DAT_080fe972 + (uint)*(byte *)(param_1 + 0x13) * 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      bVar2 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar2;
      if (bVar2 < 4) {
        puVar3 = &DAT_080fe970;
LAB_0803f8ca:
        sub_08017700(param_1,*(short *)(param_1 + 200) + puVar3[(uint)*(byte *)(param_1 + 0x13) * 2]
                             | 0xa200);
        *(char *)(param_1 + 0x12) = (char)puVar3[(uint)*(byte *)(param_1 + 0x13) * 2 + 1];
      }
      else {
LAB_0803f8b6:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
LAB_0803f8f6:
    sub_080177F4(param_1);
    break;
  case 4:
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08017700(param_1,*(short *)(param_1 + 200) + 0x11U | 0xa200);
    *(char *)(param_1 + 0x12) =
         (char)*(undefined2 *)(&DAT_080fe93e + (uint)*(byte *)(param_1 + 0x13) * 4);
    sub_0800471C(0x48);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if ((*(byte *)(param_1 + 0xf) & 3) == 0) {
      sub_08040258(param_1,*(undefined *)(param_1 + 0x12),*(undefined *)(param_1 + 0x13));
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      bVar2 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar2;
      if (0xc < bVar2) goto LAB_0803f8b6;
      puVar3 = &DAT_080fe93c;
      goto LAB_0803f8ca;
    }
    goto LAB_0803f8f6;
  case 6:
    sub_08004768(0x48);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  default:
    break;
  }
  return in_lr;
}

