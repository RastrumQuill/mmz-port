// sub_0806FB4C at 0x0806FB4C (thumb)

undefined4 sub_0806FB4C(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if ((DAT_0202e918 & 8) == 0) {
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
    do {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      uVar2 = uVar2 * 2 >> 0x11 & 0xf;
      iVar4 = iVar3;
      if (iVar3 < 0) {
        iVar4 = -iVar3;
      }
      if (iVar4 < 0x2800) {
        if (uVar2 < 3) {
LAB_0806fbd0:
          *(undefined *)(param_1 + 0xd) = 4;
        }
        else {
          if (0xc < uVar2) goto LAB_0806fbd4;
          *(undefined *)(param_1 + 0xd) = 5;
        }
      }
      else {
        if (uVar2 < 8) goto LAB_0806fbd0;
LAB_0806fbd4:
        *(undefined *)(param_1 + 0xd) = 6;
      }
      cVar1 = *(char *)(param_1 + 0xc9);
    } while ((cVar1 == *(char *)(param_1 + 0xd)) && (*(char *)(param_1 + 200) == cVar1));
    *(char *)(param_1 + 0xca) = cVar1;
    *(undefined *)(param_1 + 0xc9) = *(undefined *)(param_1 + 200);
    *(undefined *)(param_1 + 200) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

