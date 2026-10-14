// sub_0801ACE8 at 0x0801ACE8 (thumb)

undefined8
sub_0801ACE8(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar4 = *param_1;
  uVar5 = uVar4 & 0xfffff000;
  if (uVar5 != (param_4 * param_6 + uVar4 & 0xfffff000)) {
    if (param_4 < 0) {
      uVar5 = uVar5 + 0xf00;
    }
    do {
      uVar5 = uVar5 + param_4 * 0x1000;
      iVar2 = sub_08009C3C(uVar5,param_3);
      if (iVar2 < 0) {
        uVar3 = sub_08009B9C(uVar5,param_3);
        uVar6 = uVar3 & 0xff;
        cVar1 = sub_0801ADE0(uVar5,param_3,-param_4);
        if (cVar1 == '\0') {
          iVar2 = sub_08019634(param_1,param_2,uVar5,param_3,param_5,param_7,0,iVar2,uVar6);
          if ((iVar2 != 0) ||
             (cVar1 = sub_080198AC(param_1,uVar5,param_3,param_5,0,uVar6), cVar1 != '\0')) {
            if (((uVar3 & 0x70) == 0x10) || ((uVar3 & 0x70) == 0x20)) {
              iVar2 = sub_08008D8C(uVar5,param_3);
              *param_1 = uVar4 + iVar2;
            }
            goto LAB_0801adca;
          }
          uVar6 = 0;
        }
        if (uVar6 != 0) {
          param_6 = 0;
        }
      }
      param_6 = param_6 + -0x1000;
    } while (0 < param_6);
  }
  uVar6 = 0;
LAB_0801adca:
  return CONCAT44(in_lr,uVar6);
}

