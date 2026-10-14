// sub_0801F418 at 0x0801F418 (thumb)

undefined8 sub_0801F418(uint param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  puVar3 = (undefined4 *)(&DAT_08333afc + param_3 * 4);
  iVar1 = sub_080EF11C(param_1,param_2,*puVar3);
  if (iVar1 == 0) {
    uVar2 = param_1 & 0xfffff000;
    iVar1 = sub_080EF11C(uVar2,param_2,*puVar3);
    if (iVar1 == 0) {
      uVar2 = uVar2 + 0xfff;
      iVar1 = sub_080EF11C(uVar2,param_2,*puVar3);
      if (iVar1 == 0) {
        iVar1 = 0;
        goto LAB_0801f472;
      }
    }
    iVar1 = iVar1 + (uVar2 - param_1);
  }
LAB_0801f472:
  return CONCAT44(in_lr,iVar1);
}

