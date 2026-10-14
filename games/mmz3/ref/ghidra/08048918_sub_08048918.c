// sub_08048918 at 0x08048918 (thumb)

undefined4 sub_08048918(int param_1)

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
        *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x10);
        sub_08017700(param_1,0x3100);
        pcVar4 = (char *)(param_1 + 0xc6);
        if (*pcVar4 != '\0') {
          sub_08004230();
          *pcVar4 = '\0';
        }
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar3 = sub_08017B8C(param_1);
          sub_080040A8(0x16,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
          cVar2 = '\x16';
        }
        else {
          iVar3 = sub_08017B8C(param_1);
          sub_080040A8(0x11,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
          cVar2 = '\x11';
        }
        *pcVar4 = cVar2;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = sub_080041E4(*(undefined *)(param_1 + 0xc6));
      if (cVar2 == '\x03') {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | 1;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
    }
    *(undefined *)(param_1 + 0x22) = 0;
    sub_08017700(param_1,0x330a);
    pcVar4 = (char *)(param_1 + 0xc6);
    if (*pcVar4 != '\0') {
      sub_08004230();
      *pcVar4 = '\0';
    }
    iVar3 = sub_08017B8C(param_1);
    sub_080040A8(0x1c,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
    *pcVar4 = '\x1c';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = sub_080041E4(*(undefined *)(param_1 + 0xc6));
  if (cVar2 == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

