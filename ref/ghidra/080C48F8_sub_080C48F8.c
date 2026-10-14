// sub_080C48F8 at 0x080C48F8 (thumb)

undefined8 sub_080C48F8(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_08001904(0x7a,0);
  if (0 < param_2) {
    uVar3 = (uint)*(byte *)(param_1 + 4);
    uVar4 = uVar3;
    if ((DAT_02004ca8 & 0xd1) != 0) {
      if ((DAT_02004ca8 & 0x11) == 0) {
        cVar1 = sub_080B492C(*(undefined4 *)(param_1 + 0x10),(int)(char)*(byte *)(param_1 + 4));
        uVar4 = (uint)cVar1;
        if (uVar4 != uVar3) {
          *(undefined2 *)(param_1 + 2) = 2;
          *(char *)(param_1 + 4) = cVar1;
          sub_08001EAC(0x29);
          cVar1 = sub_080C4990(param_1,(int)param_2);
          iVar2 = (int)cVar1;
          goto LAB_080c4988;
        }
      }
      else {
        cVar1 = sub_080B45B4(*(undefined4 *)(param_1 + 0x10),0,uVar3);
        if (cVar1 != '\0') {
          iVar2 = 1;
          *(undefined *)(param_1 + 1) = 1;
          *(undefined2 *)(param_1 + 2) = 0;
          goto LAB_080c4988;
        }
        sub_08001EAC(0xc1);
      }
    }
    sub_080C4C08(uVar4 & 0xff);
  }
  iVar2 = 0;
LAB_080c4988:
  return CONCAT44(in_lr,iVar2);
}

