// sub_080D4754 at 0x080D4754 (thumb)

undefined8 sub_080D4754(uint param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = sub_08005500(DAT_0202ed9c);
  if (iVar3 != 0) {
    *(undefined *)(iVar3 + 0x25) = 1;
    *(undefined *)(iVar3 + 9) = 0xf;
    *(undefined4 *)(iVar3 + 0x14) = 0x80d47f5;
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined *)(iVar3 + 0x22) = 0;
    *(undefined4 *)(iVar3 + 0x28) = param_2;
    *(int *)(iVar3 + 100) = *param_3;
    *(int *)(iVar3 + 0x68) = param_3[1];
    *(undefined *)(iVar3 + 0x10) = 1;
    sub_0801CC9C(iVar3);
    sub_0801CF00(iVar3,*(undefined2 *)(&DAT_0886492c + (param_1 & 0xff) * 2));
    cVar1 = (char)(*param_3 >> 0x1f);
    if (*param_3 < 0) {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(char *)(iVar3 + 0x4c) = -cVar1;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | cVar1 * -0x10;
  }
  return CONCAT44(in_lr,iVar3);
}

