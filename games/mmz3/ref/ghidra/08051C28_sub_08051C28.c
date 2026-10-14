// sub_08051C28 at 0x08051C28 (thumb)

undefined4 sub_08051C28(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0800471C(0xe6);
        sub_080806A0(param_1);
        *(undefined *)(param_1 + 0x12) = 0x3c;
        pcVar4 = (char *)(param_1 + 0xb8);
        if (*pcVar4 != '\0') {
          sub_08004230();
          *pcVar4 = '\0';
        }
        iVar3 = sub_08017B8C(param_1);
        sub_080040A8(0x54,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
        *pcVar4 = 'T';
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 1;
      }
      sub_080041E4(*(undefined *)(param_1 + 0xb8));
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0xe4);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffff3;
    sub_080BFD74(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    pcVar4 = (char *)(param_1 + 0xb8);
    if (*pcVar4 != '\0') {
      sub_08004230();
      *pcVar4 = '\0';
    }
    iVar3 = sub_08017B8C(param_1);
    sub_080040A8(0x58,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
    *pcVar4 = 'X';
    sub_08017700(param_1,0x4d01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pcVar4 = (char *)(param_1 + 0xb8);
  if ((*(uint *)(param_1 + 0xb4) & 4) != 0) {
    if (*pcVar4 != '\0') {
      sub_08004230();
      *pcVar4 = '\0';
    }
    iVar3 = sub_08017B8C(param_1);
    sub_080040A8(0x59,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
    *pcVar4 = 'Y';
  }
  if ((*(uint *)(param_1 + 0xb4) & 8) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080041E4(*pcVar4);
  sub_080177F4(param_1);
  return in_lr;
}

