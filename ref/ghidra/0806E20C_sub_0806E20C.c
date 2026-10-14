// sub_0806E20C at 0x0806E20C (thumb)

void sub_0806E20C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return;
    }
    cVar3 = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x100;
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != -1) {
        return;
      }
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      uVar2 = 0x10;
      goto LAB_0806e296;
    }
    if (bVar1 == 2) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x100;
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != -1) {
        return;
      }
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      uVar2 = 0x10;
      goto LAB_0806e296;
    }
    if (bVar1 != 3) {
      return;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return;
    }
    cVar3 = '\0';
  }
  *(char *)(param_1 + 0xf) = cVar3;
  uVar2 = 0x40;
LAB_0806e296:
  *(undefined *)(param_1 + 0x12) = uVar2;
  return;
}

