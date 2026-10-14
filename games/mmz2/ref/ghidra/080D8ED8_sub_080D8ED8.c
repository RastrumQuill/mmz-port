// sub_080D8ED8 at 0x080D8ED8 (thumb)

undefined4 sub_080D8ED8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 in_lr;
  undefined auStack_20 [8];
  undefined auStack_18 [8];
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0834b5d0 + (uint)*(byte *)(param_1 + 0xe) * 4));
  if (((*(char *)(param_1 + 0xc5) != '\0') && ((DAT_0202ec38 & 1) != 0)) &&
     (uVar3 = DAT_0202ec42 & 1, (DAT_0202ec42 & 1) == 0)) {
    sub_080378B4(*(undefined4 *)(param_1 + 0x28),auStack_20,0);
    uVar2 = sub_080D635C(param_1,0,auStack_20,auStack_18,uVar3);
    cVar1 = sub_080D9360(param_1,uVar2);
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(char *)(param_1 + 0xe) = (char)uVar3;
      *(undefined4 *)(param_1 + 200) = uVar2;
    }
  }
  return in_lr;
}

