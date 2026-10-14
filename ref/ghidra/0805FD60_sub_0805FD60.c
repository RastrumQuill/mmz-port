// sub_0805FD60 at 0x0805FD60 (thumb)

undefined4 sub_0805FD60(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar6 = *(int *)(param_1 + 0x4c);
  uVar7 = (uint)(0 < *(int *)(DAT_0202286c + 0x4c) - iVar6);
  if (uVar7 == (*(byte *)(DAT_0202286c + 10) >> 4 & 1)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    iVar5 = *(int *)(DAT_0202286c + 0x4c) + 0x4000 + uVar7 * -0x8000;
    *(undefined4 *)(param_1 + 0x54) = 0;
    iVar4 = iVar6 - iVar5;
    if (iVar4 < 0) {
      iVar4 = iVar5 - iVar6;
    }
    if (0x200 < iVar4) {
      if (iVar5 < *(int *)(param_1 + 0x4c)) {
        uVar3 = 0xffffff00;
      }
      else {
        uVar3 = 0x100;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar3;
    }
    *(bool *)(param_1 + 0x44) = 0 < *(int *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x54) < 1) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    cVar2 = sub_0805F778(param_1);
    if (cVar2 == '\x02') {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
    }
    else if ((cVar2 != '\x01') && (*(int *)(param_1 + 0x54) != 0)) {
      sub_0805F828(param_1);
    }
  }
  return in_lr;
}

