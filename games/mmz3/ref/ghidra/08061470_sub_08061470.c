// sub_08061470 at 0x08061470 (thumb)

undefined4 sub_08061470(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08004230(0xa7);
    sub_08004230(0xa8);
    sub_08004230(0xa9);
    sub_08004230(0xaa);
    sub_080040A8(0xa9,0x300);
    *(undefined *)(param_1 + 0x13) = 3;
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    uVar1 = sub_080FE4D8(uVar3 * 2 >> 0x11,6);
    *(undefined *)(param_1 + 200) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    iVar4 = (((uint)*(byte *)(param_1 + 200) * 3 + 3) - (uint)*(byte *)(param_1 + 0x13)) * 6;
    sub_080AFA64(param_1,&local_14,*(undefined2 *)(&DAT_08361de4 + iVar4),(&DAT_08361de8)[iVar4]);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    sub_080041E4(0xa9);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 == '\0') {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else {
        *(undefined *)(param_1 + 0xe) = 1;
      }
    }
    break;
  case 3:
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080041E4(0xa9);
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 != '\0') {
      *(char *)(param_1 + 0x12) = cVar2 + -1;
      if (cVar2 == '\x01') {
        sub_08004230(0xa9);
        *(undefined *)(param_1 + 0xd) = 3;
        *(char *)(param_1 + 0xe) = cVar2 + -1;
      }
    }
  }
  return in_lr;
}

