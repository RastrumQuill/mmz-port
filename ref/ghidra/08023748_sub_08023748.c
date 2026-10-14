// sub_08023748 at 0x08023748 (thumb)

undefined4 sub_08023748(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  if ((99 < *(byte *)(param_1 + 0x19b)) &&
     (bVar1 = sub_0801B50C(param_1,1), (bVar1 & *(byte *)(param_1 + 0x12d)) != 0)) {
    *(undefined *)(param_1 + 0x120) = 1;
  }
  if (*(char *)(param_1 + 0x115) == '\x1c') {
    cVar3 = *(char *)(param_1 + 0x71);
    if (cVar3 < '\x04') {
      return in_lr;
    }
    if (('\x04' < cVar3) || (*(char *)(param_1 + 0x72) < '\x02')) {
      pcVar5 = (char *)(param_1 + 0x120);
      cVar2 = *pcVar5;
      if ((*pcVar5 == '\0') &&
         ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 2) != 0)) {
        *pcVar5 = -1;
      }
      iVar4 = sub_08017490(param_1,1,pcVar5,cVar2);
      if ((0 < iVar4 * 0x1000000) && (cVar2 = sub_0801B828(param_1), cVar2 != '\0'))
      goto LAB_08023844;
      if (-1 < *(char *)(param_1 + 0x120)) goto LAB_0802385c;
    }
    if ((cVar3 == '\x05') && (*(char *)(param_1 + 0x72) < '\x02')) {
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 3;
    }
  }
  else {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    iVar4 = sub_08017490(param_1,1);
    if ((iVar4 * 0x1000000 < 1) || (cVar3 = sub_0801B828(param_1), cVar3 == '\0')) {
      if (*(char *)(param_1 + 0x120) < '\x01') {
        *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
        *(undefined *)(param_1 + 0xc0) = 3;
        sub_08018C20(param_1,0x1c,6,1);
        return in_lr;
      }
LAB_0802385c:
      sub_0801821C(param_1);
      return in_lr;
    }
LAB_08023844:
    sub_080181E4(param_1);
  }
  return in_lr;
}

