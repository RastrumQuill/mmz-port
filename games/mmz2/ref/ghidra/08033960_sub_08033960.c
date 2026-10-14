// sub_08033960 at 0x08033960 (thumb)

undefined8 sub_08033960(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  uVar1 = sub_08036D5C();
  uVar1 = uVar1 & 0xff;
  if ((uVar1 == 2) &&
     ((*(ushort *)(param_1 + 0x218) & (ushort)(byte)(&DAT_08335a8a)[*(byte *)(param_1 + 0x215)]) !=
      0)) {
    uVar1 = *(byte *)(param_1 + 0x215) + 3;
  }
  uVar3 = 1;
  if ((&DAT_08335a80)[*(byte *)(param_1 + 0x1fc)] != *(char *)(param_1 + 0x2ba)) {
    if (*(int *)(param_1 + 0x28c) == 0) {
      uVar3 = 2;
    }
    if ((uVar3 <= *(ushort *)(DAT_0202f070 + 10)) &&
       (iVar2 = sub_080EF120(param_1,param_2,uVar1,*(undefined4 *)(&DAT_0833456c + uVar1 * 4)),
       iVar2 != 0)) goto LAB_080339ec;
  }
  uVar1 = 0xffffffff;
LAB_080339ec:
  return CONCAT44(in_lr,uVar1);
}

