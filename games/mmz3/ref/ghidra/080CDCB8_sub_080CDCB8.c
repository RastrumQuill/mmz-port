// sub_080CDCB8 at 0x080CDCB8 (thumb)

undefined4 sub_080CDCB8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08004230(0x47);
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8(0x46,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080cdd88;
  cVar1 = *(char *)(param_1 + 0x13) + '\x01';
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\x04') {
    sub_080BEF04(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0xb4),0);
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  if (*(int *)(param_1 + 0xb4) + 0x2000 < iVar2) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    sub_08004230(0x46);
    return in_lr;
  }
  sub_080041E4(0x46);
  sub_080177F4(param_1);
LAB_080cdd88:
  if (*(char *)(param_1 + 0x13) == '\0') {
    sub_080CD818(param_1);
  }
  return in_lr;
}

