// sub_08099D0C at 0x08099D0C (thumb)

undefined8 sub_08099D0C(undefined4 param_1,undefined param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar6 = uVar3 * 2 >> 0x11;
  uVar6 = (int)(uVar6 + ((int)uVar6 >> 2) * -4 + 1) / 2 + 5;
  if ((uint)(int)*(short *)(DAT_0202300c + 10) < uVar6) {
    uVar6 = (int)*(short *)(DAT_0202300c + 10);
  }
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  uVar4 = sub_080C8C38(0x100,uVar6);
  cVar1 = sub_080C8CB0(uVar3 * 2 >> 0x11,uVar4);
  uVar3 = uVar6;
  do {
    uVar3 = uVar3 - 1;
    iVar5 = sub_08005458(DAT_0202300c);
    if (iVar5 != 0) {
      *(undefined *)(iVar5 + 9) = 0x4c;
      *(undefined4 *)(iVar5 + 0x14) = 0x809988d;
      *(undefined2 *)(iVar5 + 0x1c) = DAT_020230a8;
      *(undefined *)(iVar5 + 0x1e) = DAT_0202310c;
      *(undefined *)(iVar5 + 0x10) = 1;
      *(undefined4 *)(iVar5 + 0x20) = param_1;
      cVar2 = sub_080C8C38(uVar3 * 0x100,uVar6);
      *(char *)(iVar5 + 0x12) = cVar2 + cVar1;
      *(undefined *)(iVar5 + 0x13) = param_2;
    }
  } while ((uVar3 != 0) && (iVar5 != 0));
  return CONCAT44(in_lr,iVar5);
}

