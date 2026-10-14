// sub_0808400C at 0x0808400C (thumb)

undefined4 sub_0808400C(int *param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  cVar1 = sub_08083FD8(*param_1,param_1[1]);
  if (cVar1 != '\0') {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    iVar3 = sub_080EF330(uVar2 * 2 >> 0x11,(param_4 & 0xff) - (param_3 & 0xff));
    uVar2 = (param_3 & 0xff) + iVar3 & 0xff;
    if (uVar2 != 0) {
      do {
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        uVar7 = uVar4 & 0x7fffffff;
        DAT_0202e188 = uVar7;
        iVar3 = sub_080EF330(uVar4 * 2 >> 0x11,param_2 + 1);
        iVar6 = *param_1;
        uVar4 = uVar7 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        iVar5 = sub_080EF330(uVar4 * 2 >> 0x11,param_2 + 1);
        sub_080AC8A4(iVar6 + iVar3 + -(param_2 >> 1),param_1[1] + iVar5 + -(param_2 >> 1) + -0x800,0
                    );
        uVar2 = uVar2 - 1 & 0xff;
      } while (uVar2 != 0);
    }
  }
  return in_lr;
}

