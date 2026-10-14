// sub_0804D21C at 0x0804D21C (thumb)

undefined4 sub_0804D21C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0835fa38);
    *(undefined *)(param_1 + 0x12) = 0xff;
    sub_08017700(param_1,0x4600);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(short *)(param_1 + 0xba) == 0) && ((*(uint *)(param_1 + 0x8c) & 0x20008) == 0x20008)) {
    *(short *)(param_1 + 0xba) = 0x78;
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11;
    sub_0807D3B8(*(undefined4 *)(param_1 + 0x54),
                 *(int *)(param_1 + 0x58) + ((uVar2 & 3) >> 1) * 0x4000 + -0x2000,uVar2 & 1);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

