// sub_08047A48 at 0x08047A48 (thumb)

undefined4 sub_08047A48(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08007390(param_1 + 0x74,&DAT_0835ee3c);
        *(undefined *)(iVar4 + 0x22) = 0;
        sub_08017700(iVar4,0x330a);
        sub_08017700(param_1,0x330a);
        pcVar5 = (char *)(param_1 + 0xc6);
        if (*pcVar5 != '\0') {
          sub_08004230();
          *pcVar5 = '\0';
        }
        iVar3 = sub_08017B8C(param_1);
        sub_080040A8(0x1c,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
        *pcVar5 = '\x1c';
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      pcVar5 = (char *)(param_1 + 0xc6);
      cVar2 = sub_080041E4(*pcVar5);
      if (cVar2 == '\x03') {
        if (*pcVar5 != '\0') {
          sub_08004230();
          *pcVar5 = '\0';
        }
        *(undefined *)(iVar4 + 0xd) = 0xb;
        *(undefined *)(iVar4 + 0xe) = 0;
        *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(param_1 + 0x58);
        *(undefined *)(param_1 + 0xd) = 0xb;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      sub_080177F4(iVar4);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    pcVar5 = (char *)(param_1 + 0xc6);
    if (*pcVar5 != '\0') {
      sub_08004230();
      *pcVar5 = '\0';
    }
    iVar4 = sub_08017B8C(param_1);
    sub_080040A8(0x1f,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
    *pcVar5 = '\x1f';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = sub_080041E4(*(undefined *)(param_1 + 0xc6));
  if (cVar2 == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

