// sub_08031934 at 0x08031934 (thumb)

undefined8 sub_08031934(int param_1)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  sub_08031A48();
  sub_08037E20(param_1);
  if (((*(byte *)(param_1 + 0x196) & 0x20) != 0) && ((*(ushort *)(param_1 + 0xe4) & 0xf) != 0)) {
    if (((*(ushort *)(param_1 + 0xec) & 0x8000) == 0) ||
       ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 2) == 0)) {
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 1;
      pbVar2 = (byte *)(param_1 + 0x182);
      if (*pbVar2 < 100) {
        iVar3 = sub_080EF150((uint)*pbVar2 * 0x500,100);
        iVar3 = 0x500 - iVar3;
      }
      else {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x60) = -iVar3;
      *(undefined4 *)(param_1 + 0x68) = 0x40;
      cVar1 = sub_0801E91C(param_1);
      if (cVar1 != '\0') {
        if (*pbVar2 < 100) {
          iVar3 = sub_080EF150((uint)*pbVar2 * 0x380,100);
          iVar3 = 0x380 - iVar3;
        }
        else {
          iVar3 = 0;
        }
        *(int *)(param_1 + 0xc4) = iVar3;
        sub_0801E6AC(8);
      }
      cVar1 = sub_0801E9C4(param_1);
      if (cVar1 == '\0') {
        sub_0801E9FC(param_1,5);
      }
      uVar4 = 1;
      goto LAB_08031a3a;
    }
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x154);
    *(undefined *)(param_1 + 0x185) = 1;
  }
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 2;
  *(undefined4 *)(param_1 + 0x60) = 0x40;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  uVar4 = 2;
LAB_08031a3a:
  return CONCAT44(in_lr,uVar4);
}

