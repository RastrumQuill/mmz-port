// sub_08079E7C at 0x08079E7C (thumb)

undefined4 sub_08079E7C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if ((DAT_0202e918 & 8) == 0) {
    pcVar5 = (char *)(param_1 + 0xd9);
    if (*(int *)(DAT_0202dbf0 + 0x54) < DAT_0202ea30 + -0x1800) {
LAB_08079eae:
      do {
        uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar3 & 0x7fffffff;
        bVar1 = sub_08128A9C(uVar3 * 2 >> 0x11,0x12);
        if (bVar1 < 2) {
          uVar2 = 4;
        }
        else if (bVar1 < 4) {
          if ((*(int *)(param_1 + 200) != 0) || (*(int *)(param_1 + 0xcc) != 0)) goto LAB_08079eae;
          uVar2 = 5;
        }
        else if (bVar1 < 8) {
          uVar2 = 6;
        }
        else if (bVar1 < 10) {
          uVar2 = 7;
        }
        else if (bVar1 < 0xe) {
          uVar2 = 9;
        }
        else if (bVar1 < 0x10) {
          uVar2 = 10;
        }
        else {
          uVar2 = 0xb;
        }
        *(undefined *)(param_1 + 0xd) = uVar2;
      } while ((((*(byte *)(DAT_0202e8e0 + 1) < 5) ||
                (cVar4 = *(char *)(param_1 + 0xd), (DAT_0202e8b4 & 4) != 0)) &&
               (cVar4 = *(char *)(param_1 + 0xd), cVar4 == '\n')) || (*pcVar5 == cVar4));
    }
    else {
LAB_08079f5a:
      do {
        uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar3 & 0x7fffffff;
        bVar1 = sub_08128A9C(uVar3 * 2 >> 0x11,0x12);
        if (bVar1 < 4) {
          uVar2 = 4;
        }
        else if (bVar1 < 7) {
          if ((*(int *)(param_1 + 200) != 0) || (*(int *)(param_1 + 0xcc) != 0)) goto LAB_08079f5a;
          uVar2 = 5;
        }
        else if (bVar1 < 9) {
          uVar2 = 6;
        }
        else if (bVar1 < 0xe) {
          uVar2 = 7;
        }
        else if (bVar1 < 0x10) {
          uVar2 = 10;
        }
        else {
          uVar2 = 0xb;
        }
        *(undefined *)(param_1 + 0xd) = uVar2;
      } while ((((*(byte *)(DAT_0202e8e0 + 1) < 5) ||
                (cVar4 = *(char *)(param_1 + 0xd), (DAT_0202e8b4 & 4) != 0)) &&
               (cVar4 = *(char *)(param_1 + 0xd), cVar4 == '\n')) || (*pcVar5 == cVar4));
    }
    *pcVar5 = cVar4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

