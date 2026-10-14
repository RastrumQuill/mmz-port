// sub_080E87F4 at 0x080E87F4 (thumb)

undefined8 sub_080E87F4(undefined4 *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = (int)param_2;
  if (iVar2 < 0) {
    *param_1 = 2;
    cVar1 = sub_080E92C4(param_1,iVar2);
  }
  else {
    cVar1 = sub_080EF11C(param_1,iVar2,
                         *(undefined4 *)(&DAT_0835e5dc + (uint)*(byte *)((int)param_1 + 1) * 4));
  }
  if ((DAT_0202ebb4 & 2) != 0) {
    sub_08002EA0(0x51);
  }
  return CONCAT44(in_lr,(int)cVar1);
}

