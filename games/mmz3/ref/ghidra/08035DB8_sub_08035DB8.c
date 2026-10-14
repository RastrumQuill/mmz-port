// sub_08035DB8 at 0x08035DB8 (thumb)

undefined4 sub_08035DB8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined uVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_08035ed6:
    sub_080177F4(param_1);
    sub_08017934(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      if ((*(char *)(param_1 + 0x12) != '\0') &&
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0'))
      {
        return in_lr;
      }
      goto LAB_08035f18;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_08017700(param_1,0xb314);
      sub_0800471C(0x45);
      *(undefined *)(param_1 + 0x12) = 10;
      if (*(char *)(param_1 + 0xf) == '\0') {
        pcVar5 = (char *)(param_1 + 0x27c);
        cVar2 = *pcVar5;
        if (cVar2 == '\0') {
          *pcVar5 = '\x01';
          sub_08004230(0x5d);
          sub_080040A8(0x5e,0x280);
        }
        else if (cVar2 == '\x02') {
          *pcVar5 = '\0';
          sub_08004230(0x5f);
          sub_080040A8(0x5d,0x280);
        }
        else if (cVar2 == '\x01') {
          *pcVar5 = '\x02';
          sub_08004230(0x5e);
          sub_080040A8(0x5f,0x280);
        }
        iVar3 = *(int *)(param_1 + 0x284);
        uVar4 = 2;
      }
      else {
        pcVar5 = (char *)(param_1 + 0x27c);
        cVar2 = *pcVar5;
        if (cVar2 == '\0') {
          *pcVar5 = '\x02';
          sub_08004230(0x5d);
          sub_080040A8(0x5f,0x280);
        }
        else if (cVar2 == '\x02') {
          *pcVar5 = '\x01';
          sub_08004230(0x5f);
          sub_080040A8(0x5e,0x280);
        }
        else if (cVar2 == '\x01') {
          *pcVar5 = '\0';
          sub_08004230(0x5e);
          sub_080040A8(0x5d,0x280);
        }
        iVar3 = *(int *)(param_1 + 0x284);
        uVar4 = 1;
      }
      *(undefined *)(iVar3 + 0x74) = uVar4;
      *(undefined *)(*(int *)(param_1 + 0x280) + 0x74) = uVar4;
      *(undefined *)(*(int *)(param_1 + 0x288) + 0x74) = uVar4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08035ed6;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      sub_08017934(param_1);
      if ((*(char *)(param_1 + 0x12) != '\0') &&
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0'))
      {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    sub_080177F4(param_1);
    sub_08017934(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0x12) = 10;
LAB_08035f18:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

