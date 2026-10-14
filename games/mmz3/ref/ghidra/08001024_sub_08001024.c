// sub_08001024 at 0x08001024 (thumb)

undefined8 sub_08001024(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = 1;
  do {
    cVar4 = iVar3 == 0;
    sub_08000E94();
    iVar2 = extraout_r1;
    if (cVar4 != '\0') {
LAB_08001044:
      param_1 = param_1 + iVar2 * 2;
      break;
    }
    iVar1 = FUN_08000784();
    iVar2 = iVar3 + -1;
    if (iVar1 != iVar2) goto LAB_08001044;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  return CONCAT44(param_2,param_1);
}

