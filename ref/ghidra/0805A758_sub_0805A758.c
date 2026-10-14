// sub_0805A758 at 0x0805A758 (thumb)

undefined4 sub_0805A758(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0xe) = 3;
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
      iVar4 = *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
      iVar3 = iVar4 + 0x10;
      if (0 < iVar4) {
        iVar3 = iVar4 + -0x10;
      }
      *(int *)(param_1 + 0x54) = iVar3;
      cVar2 = sub_080599B0(param_1);
      if (cVar2 == '\0') {
        iVar3 = *(int *)(param_1 + 0x54);
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar3 < 0x30) goto LAB_0805a93a;
      }
      else {
LAB_0805a93a:
        sub_0805985C(param_1);
      }
      sub_0805998C(param_1);
      goto LAB_0805a946;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
    iVar3 = -0x180;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = 0x180;
    }
    *(int *)(param_1 + 0x54) = iVar3;
    iVar4 = *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x4c) = iVar4 + iVar3;
    cVar2 = sub_080599B0(param_1);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x4c) = iVar4;
      sub_080033F0(param_1 + 0x6c,1);
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 2;
      return in_lr;
    }
    sub_0805998C(param_1);
    sub_08001EAC(0x26);
    sub_0800561C(param_1 + 0x74,&DAT_082afda0);
    iVar3 = sub_08005428(DAT_02022e98);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 9) = 0x19;
      *(undefined4 *)(iVar3 + 0x14) = 0x8059c51;
      *(undefined2 *)(iVar3 + 0x1c) = DAT_02022ed2;
      *(undefined *)(iVar3 + 0x1e) = DAT_02022f49;
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      *(undefined *)(iVar3 + 0x10) = 3;
      *(undefined *)(iVar3 + 0x11) = 0;
      *(int *)(iVar3 + 0x20) = param_1;
    }
    sub_080033F0(param_1 + 0x6c,0);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  cVar2 = sub_080599B0(param_1);
  if (cVar2 != '\0') {
    sub_0805985C(param_1);
    *(undefined *)(param_1 + 0xc1) = 0;
    return in_lr;
  }
  sub_0805998C(param_1);
  if (*(char *)(param_1 + 0xc1) == '\x02') goto LAB_0805a946;
  iVar3 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar3 < 0) {
LAB_0805a8f8:
      if (*(char *)(param_1 + 0xc1) != '\x01') goto LAB_0805a946;
    }
  }
  else if (-1 < iVar3) goto LAB_0805a8f8;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805a946:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

